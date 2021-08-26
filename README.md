# 板载 WIFI 模块固件烧录

>仅适用于出自 ST & Seeed 推出的 WioLiteAI

## 注意事项
>保存该文件的路径下不能包含特殊字符、中文、空格。


## 思路：
1. 下载辅助程序到 WioLiteAI。

2. 擦除 wifi 模块内的flash。

3. 写 wifi 模块内的flash。

## 操作流程：
1. 使开发板进入USB下载模式。

2. 运行 auto_download.bat 文件。

3. 下载辅助程序到 WioLiteAI，完成后复位板子。

4. 擦除 wifi 模块内的flash。

5. 写 wifi 模块内的flash。
>备注：脚本过程中会有相应的提示。

## 文件夹作用
- ambd_flash_tool：WiFi 模块固件下载程序、WiFi 模块固件。
- uf2conv：WioLiteAI USB程序下载工具。
- WIFIprogramme：辅助程序。
- auto_download.bat：脚本。
- WiFi_Program.py：下载辅助程序到 WioLiteAI python程序。

## Program step:
1. SW 烧录板子引导 bootloader：tinyuf2-wio_lite_ai_20210810.bin

2. 串口下载 WIFIprogramme.ino（或脚本uf2：WIFIprogramme.ino.bin）脚本命令：uf2conv.exe -f 0x6db66082 -b 0x070000000xxxxxxxx.bin -o x.uf2 
>（备注：含 uf2conv.exe 工具的文件夹下CMD）

3. 到含 ambd_flash_tool.exe 工具的文件夹下CMD

4. 先擦除WIFI： .\ambd_flash_tool.exe  erase -p COMXX
>（备注：COMXX是烧入WIFIprogramme.ino得到的串口）

5. WIFI模块烧录固件：.\ambd_flash_tool.exe  flash -p COMXX -d  xxxx 
>（备注： COMXX同上；xxxx是含km0_boot_all.bin / km0_km4_image2.bin / km4_boot_all.bin 的文件夹路径）
