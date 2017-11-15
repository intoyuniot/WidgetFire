#ifndef WIDGET_FIRE_H_
#define WIDGET_FIRE_H_

#include "application.h"

class WidgetFire
{
    public:
        WidgetFire(uint8_t ucItem = 0);
        ~WidgetFire();
        void begin(void (*UserCallBack)(void) = NULL);
        void displayFireStatus(uint8_t ucVal);

    private:
        char pDataStatusTopic[64];
        uint8_t _Item = 0;
};

#endif
