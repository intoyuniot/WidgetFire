/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 起火报警器：检测到火焰并报警

 所需器件:
 1.火焰检测模块

 接线说明:
 火焰传感器                   核心板
 1.VCC                        3.3V
 2.GND                        GND
 3.DO                         D1
 有源蜂鸣器模块
 1.VCC                        3.3V
 2.GND                        GND
 3.I/O                        D0
 */

#include <WidgetFire.h>

#define FireSensorINPUT      D1
#define BuzzerPIN            D0

WidgetFire fire = WidgetFire();

void setup()
{
    pinMode(FireSensorINPUT, INPUT);
    pinMode(BuzzerPIN, OUTPUT);
}

void loop()
{
    if(!digitalRead(FireSensorINPUT)) // 输出低电平表示检测到火源
    {
        digitalWrite(BuzzerPIN,LOW);
        fire.displayFireStatus(1);
    }
    else                                  // 输出高电平表示未检测到火源
    {
        digitalWrite(BuzzerPIN,HIGH);
        fire.displayFireStatus(0);
    }
    delay(3000);
}
