FROM debian:latest

RUN apt update && apt install -y git python3 python3-pip sudo gcc unzip wget zip gcc-avr binutils-avr avr-libc dfu-programmer dfu-util gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi avr-libc avrdude binutils-arm-none-eabi binutils-avr clang-format clang-format-14 dfu-programmer dfu-util gcc-arm-none-eabi gcc-avr libclang-cpp14 libelf1 libftdi1 libhidapi-hidraw0 libhidapi-libusb0 libicu72 libllvm14 libnewlib-arm-none-eabi libnewlib-dev libstdc++-arm-none-eabi-dev libstdc++-arm-none-eabi-newlib libusb-0.1-4 libusb-1.0-0 libusb-dev libxml2 libz3-4 teensy-loader-cli

RUN python3 -m pip install qmk appdirs --break-system-packages

WORKDIR /root
