#include "Application.h"

#include <iostream>

#include "LoadedState.h"

namespace br {
    Application::Application(void) {

    }

    Application::~Application() {

    }

    void Application::Init(void) {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            std::cerr << "Unable to initialize SDL: " << SDL_GetError() << std::endl;
            return;
        }
        
        window = SDL_CreateWindow(name.c_str(), SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 
                800, 600, SDL_WINDOW_SHOWN);

        screen = SDL_GetWindowSurface(window);
    }

    void Application::PostInit(void) {
        // Set the StateMachine's State
        //state = new LoadedState(this);
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
        SDL_FreeSurface(screen);
        SDL_DestroyWindow(window);
        SDL_Quit();
    }

    void Application::Start(void) {
        Init();
        PostInit();
        Run();
        Close();
    }
} /* br */

