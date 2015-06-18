#include "LoadedState.h"

#include <iostream>

namespace br {
    LoadedState::LoadedState(Machine * _machine) : State(_machine) {}
    LoadedState::LoadedState(const LoadedState& _state) : State(_state) {}
    
    LoadedState::~LoadedState() {

    }

    LoadedState & LoadedState::operator=(const LoadedState& _state) {
    
    }

    void LoadedState::controlLoop(SDL_Event * e) {

    }

    void LoadedState::displayLoop(SDL_Surface * surface) {

    }
} /* br */

