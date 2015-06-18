#ifndef __MACHINE_H__
#define __MACHINE_H__

#include "State.h"

namespace br {
    class State;
    class Machine {
        protected:
            State * state;

        public:
            Machine ();
            Machine (const Machine& _machine);
            virtual ~Machine ();
    
            Machine &operator=(const Machine& _machine);

            void changeState(State * _state);
    };
} /* br */

#endif /* __MACHINE_H__ */
