#include "GameApplication.h"

#include "LoadedState.h"

namespace br {

   GameApplication::GameApplication(void) : Application() {
        name = "Game";
   }

   GameApplication::~GameApplication() {

   }

   void GameApplication::PostInit(void) {
        state = new LoadedState(this);
   }
} /* br */

