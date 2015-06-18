#include "Application.h"

#include <iostream>

#include "LoadedState.h"

namespace br {
    Application::Application(void) {

    }

    void Application::PreInit(void) {

    }

    void Application::Init(void) {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            std::cerr << "Unable to initialize SDL: " << SDL_GetError() << std::endl;
            return;
        }
        
        window = SDL_CreateWindow("Level Editor", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
                800, 600, SDL_WINDOW_SHOWN);

        screen = SDL_GetWindowSurface(window);


        // Set the StateMachine's State
        state = new LoadedState(this);
    }

    void Application::Run(void) {
        bool running = true;
        SDL_Event e;
        while (running) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    running = false;
                    break;
                }
                state->controlLoop(&e);
            }
            state->displayLoop(screen);
        }
    }

    void Application::Close(void) {
        SDL_DestroyWindow(window);
        window = NULL;
        SDL_FreeSurface(screen);
        screen = NULL;
        SDL_Quit();
    }

    void Application::Start(void) {
        PreInit();
        Init();
        Run();
        Close();
    }
} /* br */

