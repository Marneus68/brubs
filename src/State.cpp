#include "State.h"

namespace br {
    State::State(Machine * _machine) {
        machine = _machine;
    }

    State::State(const State& _state) {
        machine = _state.machine;

    }

    State::~State() {

    }

    State & State::operator=(const State& _state) {
        machine = _state.machine;
        return *this;
    }

    void State::controlLoop(SDL_Event * e) {
        
    }

    void State::displayLoop(SDL_Surface * surface) {

    }
} /* br */

