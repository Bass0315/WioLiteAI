Step:
1. SW burning board to boot bootloader: tinyuf2-wio_lite_ai_20210810.bin

2. Serial download WIFIprogramme.ino (or script uf2: WIFIprogramme.ino.bin)
Script command: uf2conv.exe -f 0x6db66082 -b 0x070000000 xxxxxxxx.bin -o x.uf2
(Note: CMD under the folder containing the uf2conv.exe tool)

3. Go to CMD under the folder containing the ambd_flash_tool.exe tool

4. Erase WIFI first: .\ambd_flash_tool.exe erase -p COMXX
(Note: COMXX is the serial port obtained by burning into WIFIprogramme.ino)

5. WIFI module burning firmware: .\ambd_flash_tool.exe flash -p COMXX -d xxxx
(Note: COMXX is the same as above; xxxx is the folder path containing km0_boot_all.bin / km0_km4_image2.bin / km4_boot_all.bin)
