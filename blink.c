#include <stdio.h>
#include "wiringPi.h"

#define LED 5

int main(int argc, char const *argv[]) {
    wiringPiSetupGpio();
    pinMode(LED, OUTPUT);

    for (size_t i = 0; i < 10; i++) {
        digitalWrite(LED, HIGH);
        delay(500);
        digitalWrite(LED, LOW);
        delay(500);
    }
    return 0;
}
