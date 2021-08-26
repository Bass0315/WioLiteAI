import subprocess
import datetime
import os
import time
import shlex
import serial
from serial.tools import list_ports
from time import sleep
#from FileControl import fileOperate

DownloadProgram_commamd = r".\uf2conv\uf2conv.exe -f 0x6db66082 -b 0x070000000  .\WIFIprogramme\WIFIprogramme.ino.bin -o x.uf2"
    
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


input(" Please press the reset button and the user button at the same time. After releasing the reset button, the red light will be on and the board will enter the download mode.<Enter> ")

#WiFi program download
if timeout_command(DownloadProgram_commamd, 10) == 0:
    #print (time.strftime(" %H:%M:%S ", time.localtime()) + "!!!!DEBUG!!!!" + str(Comunicate)) 
    if "NEW.UF2" in str(Comunicate):
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "WiFi program download completed")
        displayResult(True)
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "< Please reset board >")
    else:
        #print (time.strftime(" %H:%M:%S ", time.localtime()) + " ! DEBUG ! ")
        print (time.strftime(" %H:%M:%S ", time.localtime()) + "WiFi program download failed")
        displayResult(False)
else:
    print (time.strftime(" %H:%M:%S ", time.localtime()) + "WiFi program download failed")
    displayResult(False)
    






