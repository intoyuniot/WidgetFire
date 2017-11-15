#include "WidgetFire.h"


WidgetFire::WidgetFire(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataStatusTopic,0,sizeof(pDataStatusTopic));
    sprintf(pDataStatusTopic,"channel/fire_%d/data/status",_Item);
}

WidgetFire::~WidgetFire()
{

}

void WidgetFire::begin(void (*UserCallBack)(void))
{

}

void WidgetFire::displayFireStatus(uint8_t ucVal)
{
    IntoRobot.publish(pDataStatusTopic,ucVal);
}



