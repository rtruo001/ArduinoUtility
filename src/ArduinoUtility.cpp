#include "ArduinoUtility.h"

ArduinoUtility::ArduinoUtility()
    : f_time_delaying(false), currentMillis(0), timeDelayMillis(0) {}

unsigned long ArduinoUtility::setAndGetCurrentMillis(unsigned long millis) {
    currentMillis = millis;
    return currentMillis;
}

unsigned long ArduinoUtility::getCurrentMillis() {
    currentMillis = millis();
    return currentMillis;
}

bool ArduinoUtility::delaySystem(unsigned int delayAmount) {
    if (!f_time_delaying) timeDelayMillis = currentMillis;
    f_time_delaying = true;
    if (delayAmount == 0 || currentMillis - timeDelayMillis > delayAmount) {
        timeDelayMillis = 0;
        f_time_delaying = false;
        return true;
    }
    return false;
}