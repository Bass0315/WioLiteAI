#Test_20210721
> Simple use of WioLiteAI in Arduino IDE.

## Arduino IDE environment configuration

### 1. Seeed github Download related source packages.
![image][image id]
>Contains: Feature pack (pictured above) with STM32 Arduino Core,
> https://github.com/Seeed-Studio


### 2. Arduino IDE download ST development board manager: STM32 Cores.
> https://github.com/stm32duino/BoardManagerFiles/raw/master/package_stmicroelectronics_index.json

### 3. STM32 Arduino Core package replaces the downloaded development board development package.
> Reference Path: C:\Users\Bass\AppData\Local\Arduino15\packages\STM32\hardware\stm32
>Note: need to be renamed to be consistent with the original development board package name

### 4. Configure the burning auxiliary tool: uf2conv.
>Place it under a directory (reference path):
>C:\Users\Bass\AppData\Local\Arduino15\packages\STM32\tools\STM32Tools\1.4.0\tools\win

### 5. Join the example:
>Place it under a directory (reference path):
>C:\Users\Bass\Documents\Arduino\libraries
>Note: Examples are 3rd party libraries in the IDE.
