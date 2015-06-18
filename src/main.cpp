#include <iostream>

#include "GameApplication.h"
#include "EditorApplication.h"

using namespace br;

int main(int argc, const char *argv[])
{
    if (argc > 1) {
        if (argv[1][0] == 'L') {
            EditorApplication app;
            app.Start();
        }
    } else {
        GameApplication app;
        app.Start();
    }
    return 0;
}

