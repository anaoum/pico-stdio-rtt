# SEGGER RTT STDIO Driver for Pico-SDK

This add-on module for the [Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk) adds support for using SEGGER RTT as an STDIO driver.

The main advantages of RTT over semihosting are the speed of data transfer and not halting execution. RTT is widely implemented in many debuggers, including OpenOCR. Read more about SEGGER RTT [here](https://www.segger.com/products/debug-probes/j-link/technology/about-real-time-transfer/).

## Usage

The code for the `stdio_rtt` implementation is quite simple and copies the structure of the other STDIO drivers. Until [this PR](https://github.com/raspberrypi/pico-sdk/pull/775) is merged, you need to add this repo into your project directory to use the RTT driver:

```bash
$ git clone git@github.com:anaoum/pico-stdio-rtt.git lib/pico-stdio-rtt
```

Alternatively, you can add this repo as a submodule:
```bash
$ git submodule add git@github.com:anaoum/pico-stdio-rtt.git lib/pico-stdio-rtt
```

Then, in your CMakeLists.txt file, add the subdirectory and link the library to your target:
```CMake
add_subdirectory("lib/pico-stdio-rtt")

target_link_libraries(${target}
    ...
    pico_stdio_rtt
)
```

In your initialisation code, you will need to call `stdio_rtt_init`:
```C
#include "pico/stdio_rtt.h"

int main()
{
    stdio_rtt_init();
    ...
```

Then, throughout your code you can simply make calls to the standard input/output functions such as `printf` or `puts`:
```C
    printf("Hello, World!\n");
```
