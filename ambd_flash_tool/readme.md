Step:
1、SW 烧录板子引导 bootloader：tinyuf2-wio_lite_ai_20210810.bin

2、串口下载 WIFIprogramme.ino（或脚本uf2：WIFIprogramme.ino.bin）
脚本命令：uf2conv.exe -f 0x6db66082 -b 0x070000000  xxxxxxxx.bin -o x.uf2 
（备注：含 uf2conv.exe 工具的文件夹下CMD）

3、到含 ambd_flash_tool.exe 工具的文件夹下CMD

4、先擦除WIFI： .\ambd_flash_tool.exe  erase -p COMXX
（备注：COMXX是烧入WIFIprogramme.ino得到的串口）	

5、WIFI模块烧录固件：.\ambd_flash_tool.exe  flash -p COMXX -d  xxxx 
（备注： COMXX同上；xxxx是含km0_boot_all.bin / km0_km4_image2.bin / km4_boot_all.bin 的文件夹路径）
