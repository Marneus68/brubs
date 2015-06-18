#include "EditorApplication.h"

#include "LoadedState.h"

namespace br {

    EditorApplication::EditorApplication(void) : Application() {
        name = "Level Editor";
    }

    EditorApplication::~EditorApplication() {

    }

    void EditorApplication::PostInit(void) {
        state = new LoadedState(this);
    }
} /* br */

