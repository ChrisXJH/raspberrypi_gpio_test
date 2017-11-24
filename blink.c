#include <stdio.h>
#include "wiringPi.h"


int main(int argc, char const *argv[]) {
    for (size_t i = 0; i < 10; i++) {
        delay(500);
        printf("s\n");
    }
    return 0;
}
