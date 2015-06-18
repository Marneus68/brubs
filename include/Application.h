#ifndef __APPLICATION_H__
#define __APPLICATION_H__

#include <string>

extern "C" {
#include <SDL.h>
}

#include "Machine.h"

namespace br {
    class Application : public Machine {
        public:
            std::string name = "";

            SDL_Window* window = NULL;
            SDL_Surface* screen = NULL;
    
            Application (void);
            virtual ~Application ();
            virtual void Init(void);
            virtual void PostInit(void);
            virtual void Run(void);
            virtual void Close(void);

            virtual void Start(void);
    };
} /* br */

#endif /* __APPLICATION_H__ */

