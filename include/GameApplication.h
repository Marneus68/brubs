#ifndef __GAMEAPPLICATION_H__
#define __GAMEAPPLICATION_H__

#include "Application.h"

namespace br {
    class GameApplication : public Application {
        public:
            GameApplication (void);
            virtual ~GameApplication ();
    
            virtual void PostInit(void);
    };
} /* br */

#endif /* __GAMEAPPLICATION_H__ */

