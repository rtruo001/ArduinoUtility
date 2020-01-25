#ifndef ARDUINOUTILITY_H
#define ARDUINOUTILITY_H

#include <Arduino.h>

class ArduinoUtility {
   public:
    ArduinoUtility();
    unsigned long setAndGetCurrentMillis(unsigned long);
    unsigned long getCurrentMillis();
    bool delaySystem(unsigned int);

   private:
    bool f_time_delaying;
    unsigned long currentMillis;
    unsigned long timeDelayMillis;
};

#endif