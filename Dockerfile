FROM debian:latest

RUN apt update && apt install -y git python3 python3-pip sudo gcc unzip wget zip gcc-avr binutils-avr avr-libc dfu-programmer dfu-util gcc-arm-none-eabi binutils-arm-none-eabi libnewlib-arm-none-eabi

RUN python3 -m pip install qmk appdirs --break-system-packages

WORKDIR /root
