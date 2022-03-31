cmake_minimum_required(VERSION 3.13)

set(PICO_COMPILER pico_arm_gcc)
set(PICO_PLATFORM rp2040)
set(PICO_BOARD pico)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

include("$ENV{PICO_SDK_PATH}/pico_sdk_init.cmake")
add_subdirectory("lib/pico-stdio-rtt")

project(hello_world C CXX ASM)

pico_sdk_init()

add_executable(${PROJECT_NAME}
    main.c
)

target_link_libraries(${PROJECT_NAME}
    pico_stdlib
    pico_stdio_rtt
)

pico_add_extra_outputs(${PROJECT_NAME})
