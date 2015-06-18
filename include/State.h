#ifndef __STATE_H__
#define __STATE_H__

extern "C" {
#include <SDL.h>
}

#include "Machine.h"

namespace br {
    class Machine;
    class State {
        protected:
            Machine * machine;
        public:
            State (Machine * _machine);
            State (const State& _state);
            virtual ~State ();
    
            State &operator=(const State& _state);

            virtual void controlLoop(SDL_Event* e);
            virtual void displayLoop(SDL_Surface* surface);
    };
} /* br */

#endif /* __STATE_H__ */
