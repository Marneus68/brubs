#ifndef __APPLICATION_H__
#define __APPLICATION_H__

extern "C" {
#include <SDL2/SDL.h>
}

#include "Machine.h"

namespace br {
    class Application : public Machine {
        public:
            SDL_Window* window = NULL;
            SDL_Surface* screen = NULL;
    
            Application (void);
            void PreInit(void);
            void Init(void);
            void Run(void);
            void Close(void);

            void Start(void);
    };
} /* br */

#endif /* __APPLICATION_H__ */

