#ifndef __EDITORAPPLICATION_H__
#define __EDITORAPPLICATION_H__

#include "Application.h"

namespace br {
    class EditorApplication : public Application {
        public:
            EditorApplication (void);
            virtual ~EditorApplication ();

            virtual void PostInit(void);
    };
} /* br */

#endif /* __EDITORAPPLICATION_H__ */

