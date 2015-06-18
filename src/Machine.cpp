#include "Machine.h"

namespace br {
    Machine::Machine() {

    }

    Machine::Machine(const Machine & _machine) {
        state = _machine.state;
    }

    Machine::~Machine() {
        delete state;
    }

    Machine & Machine::operator=(const Machine & _machine) {
        state = _machine.state;
        return *this;
    }

    void Machine::changeState(State * _state) {
        state = _state;
    }
} /* br */
