#ifndef __LOADEDSTATE_H__
#define __LOADEDSTATE_H__

#include "State.h"
#include "Machine.h"

namespace br {
    class LoadedState : public State {
        public:
            LoadedState (Machine * _machine);
            LoadedState (const LoadedState& _state);
            virtual ~LoadedState ();
    
            LoadedState &operator=(const LoadedState& _state);

            virtual void controlLoop(SDL_Event* e);
            virtual void displayLoop(SDL_Surface* surface);
    };
    
} /* br */

#endif /* __LOADEDSTATE_H__ */

