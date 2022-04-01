# Seed Studio WIO Lite AI

![102110607_preview-07-min](https://user-images.githubusercontent.com/1838777/161169288-63385a98-f2d7-4b59-b2d0-d69c1259adcf.png)



# Onboard WIFI module firmware burning

>Only for WioLiteAI from ST & Seeed

## Precautions
>The path to save the file cannot contain special characters, Chinese and spaces.


## Ideas:
1. Download the auxiliary program to WioLiteAI.

2. Erase the flash in the wifi module.

3. Write the flash in the wifi module.

## Operating procedures:
1. Put the development board into USB download mode.

2. Run the auto_download.bat file.

3. Download the auxiliary program to WioLiteAI, and reset the board after completion.

4. Erase the flash in the wifi module.

5. Write the flash in the wifi module.
>Note: There will be corresponding prompts during the scripting process.

## Folder role
- ambd_flash_tool: WiFi module firmware downloader, WiFi module firmware.
- uf2conv: WioLiteAI USB program download tool.
- WIFIprogramme: auxiliary program.
- auto_download.bat: script.
- WiFi_Program.py: Download the auxiliary program to the WioLiteAI python program.

##Program step:
1. SW burn the board to boot the bootloader: tinyuf2-wio_lite_ai_20210810.bin

2. Serial download WIFIprogramme.ino (or script uf2: WIFIprogramme.ino.bin) script command: uf2conv.exe -f 0x6db66082 -b 0x070000000xxxxxxxx.bin -o x.uf2
> (Note: CMD under the folder containing the uf2conv.exe tool)

3. Go to the folder containing the ambd_flash_tool.exe tool and CMD

4. Erase WIFI first: .\ambd_flash_tool.exe erase -p COMXX
> (Note: COMXX is the serial port obtained by burning into WIFIprogramme.ino)

5. WIFI module burning firmware: .\ambd_flash_tool.exe flash -p COMXX -d xxxx
> (Note: COMXX is the same as above; xxxx is the folder path containing km0_boot_all.bin / km0_km4_image2.bin / km4_boot_all.bin)
