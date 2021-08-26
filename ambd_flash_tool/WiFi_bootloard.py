import subprocess
import datetime
import os
import time
import shlex
import serial
from serial.tools import list_ports
from time import sleep
#from FileControl import fileOperate



EraseWiFi_command = r"ambd_flash_tool.exe erase -p "

WriteFirmware_command = r"ambd_flash_tool.exe  flash -p "
WriteFirmware_command_b = r" -d firmware"

def find_SerialPort():
    global port
    timeout = 10
    while timeout > 0:
        for p in list_ports.comports():
            #print (p[2])
            print(time.strftime(" %H:%M:%S ", time.localtime()) + p[2])
            if p[2].upper().startswith('USB VID:PID=8050:2886'):
                port = p[0]
                print(time.strftime(" %H:%M:%S ", time.localtime()) + 'INFO: find serial on:' + port)
                return port   
        sleep(0.1)
        timeout -= 1
    print(time.strftime(" %H:%M:%S ", time.localtime()) + "Error: No serial port found..")


      
#Download wifi program
def timeout_command(command, timeout):
    """
    call shell-command and either return its output or kill it
    if it doesn't normally exit within timeout seconds and return None
    """
    # if type(command) == type(''):          # Adding these two sentences will cause an error.
        # command = shlex.split(command)
    global Comunicate
    start = datetime.datetime.now()
    process = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    resultcode = process.poll()
    while resultcode is None:
        now = datetime.datetime.now()
        if (now - start).seconds > timeout:  
            process.kill()
            return -1
        sleep(0.01)
        resultcode = process.poll()
    Comunicate = process.communicate()
    return resultcode
    
    
def displayResult(flag):
    if flag == True:
        print ("- - - - - - - - - - - - - - - - - - - -")
        print ("-                                     -")
        print ("-              succssed               -")
        print ("-                                     -")
        print ("- - - - - - - - - - - - - - - - - - - -")  
    else:
        print ("- - - - - - - - - - - - - - - - - - - -")
        print ("-                                     -")
        print ("-               failed                -")
        print ("-                                     -")
        print ("- - - - - - - - - - - - - - - - - - - -") 


input(" If you reset board.Please press <Enter> to continent.")
#find serial port
USB_SerialPort = find_SerialPort()
print (time.strftime(" %H:%M:%S ", time.localtime()) +  "USB_SerialPort" + USB_SerialPort)

#Erase wifi
EraseWiFi_command = EraseWiFi_command + USB_SerialPort
print (time.strftime(" %H:%M:%S ", time.localtime()) + EraseWiFi_command)
if timeout_command(EraseWiFi_command, 300) == 0:
    if "Success!" in str(Comunicate):
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "Erase WiFi completed")
        displayResult(True)
    else:
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "Erase WiFi failed")
        displayResult(False)
else:
    print (time.strftime(" %H:%M:%S ", time.localtime()) + "Erase WiFi failed")
    displayResult(False)
    
#Write firmware
WriteFirmware_command = WriteFirmware_command + USB_SerialPort + WriteFirmware_command_b
print (time.strftime(" %H:%M:%S ", time.localtime()) + WriteFirmware_command)

if timeout_command(WriteFirmware_command, 600) == 0:
    if "Success!" in str(Comunicate):
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "Write firmware completed")
        displayResult(True)
    else:
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "Write firmware failed")
        displayResult(False)
else:
    print (time.strftime(" %H:%M:%S ", time.localtime()) + "Write firmware failed")
    displayResult(False)





