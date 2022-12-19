cmake_minimum_required(VERSION 3.0.0)
project(vector VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_SYSTEM_NAME Linux)
set(CMAKE_SYSTEM_PROCESSOR AMD64)

set(CMAKE_BUILD_TYPE Debug)

set(EXECUTABLE main)
add_executable(${EXECUTABLE} main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -O0 -g3")

# Create .hex and .bin file
add_custom_command(TARGET ${EXECUTABLE}
   POST_BUILD
   COMMAND objcopy -O ihex ${EXECUTABLE} ${PROJECT_NAME}.elf
   # COMMAND objcopy -O ihex ${EXECUTABLE} ${PROJECT_NAME}.hex
   # COMMAND objcopy -O binary ${EXECUTABLE} ${PROJECT_NAME}.bin
   COMMAND objdump -h -S  ${EXECUTABLE} > ${PROJECT_NAME}.list
   COMMAND objdump -m i386:x86-64 -D ${PROJECT_NAME}.elf > ${PROJECT_NAME}.asm
   )