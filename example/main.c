#include <stdio.h>
#include "pico/stdlib.h"
#include "pico/stdio_rtt.h"

int main() {
    stdio_rtt_init();
    while (1) {
        printf("Hello, World!\n");
        sleep_ms(1000);
    }
    return 0;
}
