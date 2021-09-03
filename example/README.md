# Test_20210721
>Arduino IDE中简单使用 WioLiteA。

## Arduino IDE 环境配置

### 1、seeed github 下载相关源程序包。
![image][image id]
>包含：功能包(如上图) 与 STM32 Arduino Core，
>https://github.com/Seeed-Studio


### 2、Arduino IDE下载 ST 开发板管理器： STM32 Cores。
>https://github.com/stm32duino/BoardManagerFiles/raw/master/package_stmicroelectronics_index.json

### 3、STM32 Arduino Core 包替换下载好的开发板开发包。
>参考路径：C:\Users\Bass\AppData\Local\Arduino15\packages\STM32\hardware\stm32
>注意：需要重命名为与原来开发板包名称一致

### 4、配置烧录辅助工具：uf2conv。
>将其放置到目录下（参考路径）：
>C:\Users\Bass\AppData\Local\Arduino15\packages\STM32\tools\STM32Tools\1.4.0\tools\win

### 5、加入示例：
>将其放置到目录下（参考路径）：
>C:\Users\Bass\Documents\Arduino\libraries
>备注：示例 在 IDE 中的第三方库。

[image id]:data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAo0AAAH9CAYAAAB/Z0YRAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsMAAA7DAcdvqGQAAGpUSURBVHhe7b3fj13FfuDL/3Skeeh3MHdshHgj0jwkD+kXRN54GSlKOAw0DBzSSWZgIBB2YBJFOkqkmyNZ6idkgy/ce41Nj3UiRZZGQrHbbcO9tkF3ck4grlvf+rFWVa36sdbu7u219/58pC/de9XvWrt3fVyrm3pCAUzg+++/V3/0R39kvsJ2c/v2bfcdwHR4/2w23N+TMdf5QxphNCKKv/M7v6Pee+899fu///uI45bDogAngffPZsP9PRlII6w1Xhj/4R/+wbz+p3/6J8Rxy2FRgJPA+2ez4f6eDKQR1pZUGD2I43bDogAngffPZsP9PRlII6wtIoWffvqpexUj4igB2weLApwE3j+bDff3ZCCNALBRsCjASeD9s9lwf08G0ggAGwWLApwE3j+bDff3ZGyENP7sZz+bHACwmbAowEng/bPZcH9PxsZI4xROLo2/Vr/43T9Vv7zjXta486n6g9/9j+rC7/6t+lK//PK9/6h+8ZVNAoDTp/2hdk/98g/jn9/JP5df/a36g1/dcy8Sup/5UtjPAk/UdlevfMbE5fjcWA3N94++RxeCz/8v3wvfS8naYPLG99HEH36q/lnS3vu1ziTvx/g9AWfHVOn551/96eTPBnN/3ctNA2mczPDDPAy/kMgbzV4LPgzMYsKHA8BZ0vxQk59D/aH+S7fY9z+rQfgP/XTRN4t8KgoJUr/LNyQWhGzbOv7gV5/qz5k+H//YXB1jFkVz39x7pH8v2LXhD371a/XP0XtDrrt72Yli+D3SuEqQxpOBNE7Af8Bn30BuIYrfKOGHgXw/XBwkijsWADCZ1oea/BzLz5ws9r/QYX8O/c+pXfiLP+NmkS/8w9HLwARpFMo7jX0+pHF1TF0Uq/+AMCCNcwJpPBlI40jy/7J0DN4kJUEcfjCwGACcLvUPNSt8Xhr7n2Mvgu0dRC+dnsHP8BLSGH5O9NIYX+dzYjXU3j/pvaqF7DiWNgokfvEe0vg4OL37238GRJ8JnQ9YD9i0n1ukcSnsB7q8GcybrLhABP/C1N//0r2pujdYdncSAE5C7UPN/Oz9YW6nUWQxEbX059rI4KdWBLqfW1kYEtGUfGE9gxhKY7ew6AWnl8Y+X5QHzpRxi6J9r9j3kbuvpXUg/JzvdhfD75HGVTJVeto/e/HParSJZD4LNuveIo1LYnYe9QdF9c0kbx6zSMSLSrpTAQCnR+1D7ctffaqjl0b/c2l/nt3rO/f6f8hlBNDuIPmFQC8Y6T/8jFyW/iE5Zaexz4c0ro7a+6ffOezvjbx3zL3pPu9duPeA3Lvu8z6Uxg6kcZVMkx67W1j8B4FmsJ6H0qgxP9+V8usG0jiR9AM+jf7No99s7/2tXlDkw8AtLO4Dw77J7KMLFgKA06X1oeY/5K009jtGPi36R164SxTIoK9jsGAIS0hj9zmgPyNsfbZf4WcLnxWrYeqiOPh1pZBUEqPXwT1O/+EBZ8ak++vuV/Eeh58PHikTXbP3eVN+fpHGkXhZ9I+2snQf+H5RSXYk3L9O+4VGrlU+cABgMtOk0V2UD3/5+TY/lyJ2Li23KBj8gp/5+Z0gjaV/hP6B/gdn2G4klnCm1N4//U5jO0rrhLz/uJePj/HSE6zPhZ/prEwOpNHec7m2CSCNE+mFL0MgjV/qD/0vuwVCvvYf+lEd7g0GAKfDWGm02J/N7kNefh71gt8t6qE0RouBk8budcAEabS4a1LOP/aUtoI6kMbVMWlRNO8J/X6q/N5a6R8GUeTeR3AmjLu/9uc7/Jkz4lf8uQ6IPic2D6RxIuaNk/7ABxELZW6BaIgnAJyIadLocLI4WBSMyLmfb7cQ+M8As6CYcsluQ1gmG+FngnxGBOWNLMof28R1Io2rY9Si6N8v6T8iKvLokfcP9/Lx0by/7t7m7pH9B0DjHkt5pHHlrP1OoyWRRv9BU3hDAsDJmSSN/meytIMQLgBOBoc///JzHtQxYacxK4PB54gX1DEyAqdD7f3TPZ4uSoGXR8kjv9Puvh8Tuk44e2r310hhS/j8Pwqjn/HgvusoOsIGsDHSODUAYDOZ64carAe8fzYb7u/J2AhpBADwsCjASeD9s9lwf08G0ggAGwWLApwE3j+bDff3ZCCNALBRsCjASeD9s9lwf08G0ggAGwWLApwE3j+bDff3ZCCNALBRsCjASeD9s9lwf08G0ggAGwWLApwE3j+bDff3ZCCNALBRsCjASeD9s9lwf08G0ggAAAAAawvSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADSZlTR+f/iMevj1BfXw+gX1QOLaBXX/q/M2rp5X/+///e9N/D//179XD2684EoBAAAAwFkzK2kUYVTffqLjYx0Lpe59pONDHR8odfd9He8pdfyujnfUd//n/+ZKAQAAAMBZMy9pvC7S2BZGdfxf1HdfIo0AAAAAq2JW0iiPpMcIo7rzZ+rb2UjjRbX7xK7+LwAAnA3H6mDvRbU4dC9LHC7U3sGxe+HQ115sFtQtHOy16wfYcuYljde0NI4QRnXnT9W3XzztStW4qfZ3nlBP7J6l0m27NJbm2F1/Ioxkni7u6ms7av+me22Q+fT12Tryt8/lS+q9ub/jrsXR1WHa9NfTtuFUkcX6xRdd7Kl4LT9Ui1LasuU8xwdq78WFzmlFoK9LR84KgvwW28ZAPjpa6ZqTjsEQ5gv7FzKiLxuDjLU2XzLtfXr3PdIIcGrMShrlD17GCKO68yfq3v8xQhpv7qudnR21c6ZStw7SWJOvE1Kc40ybTtjCaxd3tbzt7OvcFiN93etSv+V6356pozQ46V/XN32vgrZsf+Z+79YVvcDvHahufTcS5cXH7hp1ohOlLVuuRxZ/n+dw0RaqPr+tX+pcVMp5ES3Xe/Ix2Hz9dRlHTnzafVlP7H0YGX6uRf67eQ/ugcxxOndm3jN1ZQKRBOiZoTS2hVEdvT1KGkVAdvZvGqk4E2EybLc0lue40GYkcYLdMTT5TFq4+zey3yJ/oQwG1O+9tM1u42oIdokGO3tWpPKL89RyQX55pWWrvujH+T1F2XRicjBCRnuWHXuASE4oosJSfVkvirt/ej7SMRuB9pkrUtiVOz6O5nPQVpIOAHOTxqtaGkcIozp6S927cs6VKiHC4YQgKxVWVvyjShGf5a8PJWiYzwuQS+/6E+ePd74kTY/hosiUTTcCFDxi7esXcm0n9RfabfczR22OS8KXuW7Go+VTX4/HU6ojRsQwLueoyKTBtMtO40owi7iTJfk+MYGipE0tJ3k6ubJC1gtDKGuOKH9Pvj+94BX7m2PsGIxQDgVWGLa3ZF/WDZmTZL6E8DG0RcRc32OTV+YmSM/MucHMty7j7n8vja4u2end0GkFWJZZSaP8PxjHCOOjW3vq7ufn1KMff3AlM0TC4OSrswcrREPRqF0Py4cyI2lePGr57PdDKUzai0TGpnfjMGn6tbeo9NFro+1evqb2s0B1jtM2Pfnr5hHzQPBKdWjM2KWfhfRaWcGVL6bD6eEWZ79uRztCjqz4LFFOXidZOkz5RBBL+XP9Ca/l0rNMGYPJG8iOl5qgvGepvqwliQAKMi/JfZR53VssrGBKejhhJWlMkDpGZAPYauYnjQ1hVEdvqvtXn1ffffmsun/jJVdySLr7FL2OZCegdt0JShi2PpElJ1jVfBmJybYX5ktFrPJ6SttT+1mgOsfFeuR6OAaNmYddtavzh/WN7UtWOAePwXvsH8skfYAzwUhSuntW221zLFXOSFZmN7EjeRRdyT8QMWk7EJUxorbs2HNInq79Jfqy1kSSWPh1ggOdnsqipzDn/Q50IxJBBdhmZiWNctJLSxjV7TfMLuNP37xsvuYRmRpKUbd7lpU1zdTrhkQai/kyApTNH0rVRGkc2/bUfmZpzHGpnkHbwRiW/Z3GwbxIM6mAWoxgtiuEU8AszKVFPFqI+0etwrLljKTlynXEwlHLH4uYbWeKUCw7hjK+79P7shHIvJlxDoWxw0tjl7cQ2XnS87u3UIuD5o0A2GrmJY1yyktDGNXt19XxZ0/1X3OImAx2mazkWF8Ivxcuqn1rXiOv6yu7vn5JC78v5csJkM0fyU0kVZJekERD+HpK21PyFmjOcaYeU2YohaHEjfrraZHLYhkhnSdHZfcRTpnqrl8iSqFILVsuTTMcy98ydBiRq+bviaVxSDX9RGN3UuQFyGEENys77b5uBIEIlu5ZOmcdUrZYSAj+MdHMC7DdzEoazdGADWFUt15Tx5e1LPqvGUq7SdF19ztt8e6YZtT1UGREUMbkK8mYFS2fPxaxVH4ar4ttS5L7/xd6uZrcz5j2HDshDNqIxc7lHUhcKJLlOrrxmEjqMGNL69UYaQ3qctEaKyxBsMiH0a3HRpD89UCwli0n1wdSZQWtqydMz+bvOZE0nmQM6U5oLl/CJkujjM2MPxA5f20wZpm/nPBVRNDWlcytu3+FIgBbzbykUU55aQijuvWqunNZpNF9BYCtZ6o4bbJobQJe9mvi1kl1uFM7Uhq9eNbq93nYeQTomZU0mqMBG8Kobr2i7lwSaXRfAWDLyf9xRJmp+QEAQJiXNH7xtPmfdpu4cs78oYuE/O6iPIqWnUURxaNLT5qvx1eecyXh7Egfn9vgkS4AAMB2MStpBAAAAIB5gjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAms5LG7w+fUQ+/vqAeXr+gHkhcu6Duf3XextXz5mxqCTlu8MGNF1wpAAAAADhrZiWNIozq2090fKxjodS9j3R8qOMDpe6+r+M9pY7f1fGOPT0GAAAAAFbCvKTxukhjWxjlfGpzegwAAAAArIRZSaM8kh4jjHI+tTk9BuBxImdZJ+dpA8BZYM8Rb57od7gYHg9ZOXs6RI4l5MRAgDrzksZrWhpHCKOcTy2nx5S5qfZ30lNMdlV8iMkwT3zKSXwSSjktrVew6Tv7qU6E5XbUIDmi1b91pza/a8KpSeMq3k+PAVms5exeE+mxfXKUXyGtWk6wZYtnR8sZxC8u1CV/NnESAzFw+c3lk7YdUct70nrsNdtP1/eNR8ZcP/7xcNGnd98jjQCnxqykUf7gZYwwyvnUctRgGStckYjIAq8X1/6a5AkW2pv7aqdbeO1iHOf1i3n4vVSrF+wuoxe9XbWrr8eLvE3rrpn+5ATBU+vfulOb3zXiVKRxVe+nVaMX+L0D1a3vRsa83Nhdo06CorR2OXm9WJSFSxb/bFoohwF9/pO3banlnVKPRfonctjnlTr6cRzqesZI0Tph52hk+Hsm97e7f8G9zEmjubeZujKBSAL0zFAa28Kojt6eLo2CES+/sEqeWMJkwTaLsOQbKwMFcejq8kRtC4U+dlT6t+5Mmd85cyrSmHBm76fHTbBLNJA3K1L5xTkoFyCilBeufH5BygzbKOef3vaQWt5R9TgROqjlFQEKZXeDKO7+6TGn82Hk2meuSGFX7vg4mrNBW0k6AMxNGq9qaRwhjOroLXXvyjlXKkdpAQ2v16Qs3QkrUxK5wXWRgaTCugTW+ufH4R5PdpIRPq6M6765v9NdD3ekstdTIYleT297SGt+S3XJdT0n+7KrNmynNMa0vjitNJ4caT1h/qQeF+EYy/3rObv302PGLOJOFOX7xASKAhWWC6jmzwnU1OvC1LYzTJJGI9OhpPYyPameTULmJGON4WNoiwi+lkKTV+YtSJf7mKnDzrcu4+5/L42uLtnN3dBpBViWWUmj/D8Yxwjjo1t76u7n59SjH39wJVP8Au5edoTX5ftAyowYBa9lUS4t7ibvUApC0gXcCMOkRb7WPzuOoRgF+cOxphLoGXs9ej2x7RLF+a3V5YTMVxzOSWksrsxAuKrjyWHrCcck9y+VxqiesJ1i/zQmTcqe5fvpMeIWZ79uRztCjqz4JOVCSqIk14f5yzuZ+fyaJdrOUcs7SDNt9rITpufz2p2zbP83hkQABRl7IvryntpbLKxgSno4KSVpTBjsNALAgPlJY0MY1dGb6v7V59V3Xz6r7t94yZVMKUmLXE/Fy0coKj3d7lBhNY/FoWewgFd3hpwMRf2o9S8zvk7C4ojrT8dYuJ4KTvR62bYlhnM8mN9mXek8+NeFsUh9g/sTjiEznlyfc/VE13L1hNcK/Us4nffTfDCCmD7izSziqRRlywVkZcyI1HBncOr1pdouUMtbrSfZAW3VU9wt3QQiSSz8ysCBTk9l0VN4v6WPrYuxyXMLMJFZSaOc9NISRnX7DbPL+NM3L5uveXILuGawyNcX8B674A/qM6QiY8ku8pEMFPrYUetfpmxOagbYckNxSa4vI43NtmsE81utK53r3BwlY8nWF5bLjCdHrp7oWq6e8rWyPJ7V+2n1mIW5tIhHC3G8E1gsF5CTKCN7mXK5vEIu/7Jtl6jlLafZ+RgvMLXfy9wQ5D1j5qAyTi+NXd5ClOZwb6EWB/V7D7DtzEsa5ZSXhjCq26+r48+e6r9mySygssg2hcMhkhQX7hfyJM3slGUkZ7jrk/QpKzMhlf6ldRkC8XJc3HWip/u8310Pylauh4/q7W5gRRprbeeozW+1rjCfEMxRaSyuvrJw5caTI+2XLZfWE+7+RfNWm+u0zJm8n1ZMaXfPkDwuDiWyWq5nKFylR9AlocrkX7rtMpOk0bSfl6Ior5cjh5HfTd8NC0RweI8dybx0SNliISF4jzTzAmw3s5JGczRgQxjVrdfU8WUti/5rFreA60W+i8GCKnlKUuYW76B8sK4naXk5yj4qNDJWL9dT618iDJ6o/jhd+tP1OUgoXQ/HuKOlrbrTKFTazlGb33JdFWnUlMZiywVp0dwXxpPD/MPD16HblT/ISeVTz1W+nXFzfXbvpxVT2O3p1mMjSP56IGqtco6scOXEybSTEcFc/mXbrnAm0qixj9B9H9uiu67IuM0Yg5vgrw3mVeYvJ3wVEbR1JfPn3geFIgBbzbykUU55aQijuvWqunNZpNF9BZgFE+QTTp2BgDWYmh9Wi388XxO3TpzDXeqR0ujFs1a/z8POI0DPrKTRHA3YEEZ16xV155JIo/sKMAuQxsfH1N/p24LfAQQAOAPmJY1fPG3+p90mrpwzf+giIb+7KI+iZWdRRPHo0pPm6/GV51xJgMcN0ggAAJvNrKQRAAAAAOYJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJrMShq/P3xGPfz6gnp4/YJ6IHHtgrr/1XkbV8+bs6kl5LjBBzdecKUAAAAA4KyZlTSKMKpvP9HxsY6FUvc+0vGhjg+Uuvu+jveUOn5Xxzv29BgAAAAAWAnzksbrIo1tYZTzqc3pMQAAAACwEmYljfJIeowwyvnU5vSYOSPnFA/Ouz4DxrZjzikun7UNADBfjs3Rgs0T/Q4Xw+MhK2dPh8ixhJwYCFBnXtJ4TUvjCGGU86nl9Jg6F9XuE0+oJ1ys/KSO0dJoTxJ5YtkOzkIa3RiC+T59Ya63cXE3SfMRzquZgzA9Nx+P+X2zSchiLWf3mkiP7ZOj/App1XKCLVs8O1rOIH5xoS75s4mTGIiByx9fbrTRkc/XnYvso2Aj9XzhHKX920ZkPurHPx4u+vTue6QR4NSYlTTKH7yMEUY5n1qOGixjF/5+wRfh2NVXV8gUmdvZ0TKzZP9WtaNZZRVH6A3bMKI4aFTufWYuZZ5SSXQS2Vcxg/fNxqAX+L0D1a3vRgS9+Nhdo060orR2OXm9WJSFThb/bFpWDvP5vcyV2mj15bDSv5ByPqm/76vkGyM+m4Kd25Hh3y9yf7v3TvA+ykmjeV9l6soEIgnQM0NpbAujOnq7Lo1GxB6zSI2UuZv7Whi1yYgALSVdWyyNZuyDRnPSmMpggJFJl38O75uNJdglGshb7dFjfnepLFv5/IKUGbaRye/k4+AE4pdva8jYfDpjL0dbRHH3T89HOudG9H3mihR25Y6Po/kctJWkA8DcpPGqlsYRwqiO3lL3rpxzpXJUJMFg0/0jSJG2ntNJM9EUEBEht/s1kD8vSa7eLq3Sjtk5C4QpfB2lSR263X0RJltHfSyphKWUpHHcGMbNcdqGfR2XFaR80t+qWEt+vwNp2y6/b2BpzCLuRFG+T0ygKIFhuYBq/pxcjb7eC2yxjYRhPr8L6SPovxFmL6mVfAlj+7JxyHxlrDF8DG0R+ddzaPLKvAbpmfebwdwLXcbd/14aXV2y07uFUw5QY1bSKP8PxjHC+OjWnrr7+Tn16McfXMkMZgdJxCMVnlAShFBGTpIWy4Z5dFoUFUckM/n64/432pkkjbqcr8ikxeIUyVi4G5fF97UPW740hmXmOG0jzBcidSR9rUpj2Iam+L6BpXGLs1+3ox0hR1aKknIhJYmS68P85Z3MNH9Yb6mNlFY+M14vppE0xkT5BC81hTnYDhIBFGRekn8AyNztLRZWMCU9vql5aUzopREASsxPGhvCqI7eVPevPq+++/JZdf/GS65kGXn8ayTAW0EnBXEYyTlJWioluWsJInyhnMWvE5kRWu1MksZUztzrbL8zfYkopRfGUJvHUlpSl5HlbIeWkcahgA7eN7AURoRSScos4ql4ZcsFZEXNSFZmt27s9WTX8bSkUecoPjKPqT9aj3dEt4hIEvNzdHig01NZ9BTeb/0ObyO2dd4BMsxKGuWkl5YwqttvmF3Gn7552Xwdh4iEE46aQJxmWlVUBNunVJD6Ha6CcNXaOVNpHIpVT6avhpFj8FTnLK0ruKcRGWks5tVIm4P8nko5aGIW5tIiHi3E8U5gsVxATtSMaGbK5fIKcf70UXEQDWko1d9zcmkcX8eGIu8Zcz8qc+ClsctbiOz91PO7t1CLg/r7DmDbmZc0yikvDWFUt19Xx5891X/NIYIUm0ogSUMRuLgbytRppFnBKQuQJisrYT05EWu0Y8Swlzu7W+baGCuNro1wB9T0tTaWbF+FMWOQ6sfM8bAuM75Bv6SOdF5d3mjMGjMnQZ3V9w1MorS7Z0geF4cSWS3XMxS10iPokmyV8ve0ZdCS68tx8FLS4/H5/jTyBZ0zgtuQ140mEMHiPUvmrEPK1m50+B5p5gXYbmYljeZowIYwqluvqePLWhb91wLd40UXkQs4WTjVNCOBPk2LhvyRSUW0So9X++sFEWu0E457RwvX5J1Gg5W3vp2hhMVMkUbNUnOcq8tei+cxL42GpO7c70VW3zcwnsJuT7ceG3ny15NHxEF+H+k6PhA1qS8nVaadwqPphoSdRBqjXcuwHdOfXhqL+TT2Eb1Pb4v0JmJEWsYfvAH8tcG9kbnNCV9FBG1dydy692ChCMBWMy9plFNeGsKobr2q7lwWaXRfAWDrGSt4nqn5YbV4ma6JWyfVXrYnSKMXz1r9Pg87jwA9s5JGczRgQxjVrVfUnUsije4rAGw5U3/fb8t/PxAAYEnmJY1fPG3+p90mrpwzf+giIb+7KI+iZWdRRPHo0pPm6/GV51zJOZM+6rWxno89N2ksAAAAMIVZSSMAAAAAzBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANJmVNH5/+Ix6+PUF9fD6BfVA4toFdf+r8zaunjdnU0vIcYMPbrzgSgEAAADAWTMraRRhVN9+ouNjHQul7n2k40MdHyh1930d7yl1/K6Od+zpMQAAAACwEuYljddFGtvCKOdTm9NjAAAAAGAlzEoa5ZH0GGGU86nN6TFzRs6Irpw9fWqMbcecuzw8axkAYP7Yc7qbJ/odLobHQ1bOng6RYwk5MRCgzryk8ZqWxhHCKOdTy+kxdeLTS1Z+asloabyp9nd0H5ft4Cyk0Y0hmO++T4/5PsDjQxZrObvXRHpsnxzlV0irlhNs2eLZ0XIG8YsLdcmfTZzEQAxc/v5ypf6ob2GZHKV6KmMP6M5W9hF23PS5XcdmIfNWH+vhok/vvkcaAU6NWUmj/MHLGGGU86nlqMEyVlR6QRGp2dVXV8gUmdvZ0UK3ZP9WtaNZxUrjUAhncB/gMaEX+L0D1a3vRra8ZNldo06morR2OXm9WJSlURb/bNpADi19/kb90pewb0Vq9dTGHnNYHKOVzk5wRvdrfbDzNzL82OX+dvMQvI9kflIbNPOeqSsTiCRAzwylsS2M6ujtujQaEXvMIjVS5m7ua2Hcv6mzL7kLN2dpnMN9gJkQ7BIN5M2KVH5xDsoF1IUqvxslZYZtjK1f+pivt8agngljz/dXM5DE5fq2DhR3//QcpPff7Mz6zBUp7ModHwdzmGkrSQeAuUnjVS2NI4RRHb2l7l0550rlSHe4UuJHpiJtPaeTZqIpTCJb7pHxQP68iLl6u7RKO+YRdLCTF76O0qQO3e6+btPVUR9La3dw7E4jbC1mEXeyJN8nJlCUwLBcQDV/btdt4vWs7Ol8B/r6QD4qDOqpjd0IpZc/K5O97ARzMOhzTbrXHJmTzMDCx9AWkX89TyZvItGZOTeY+dZl3Fz20ujq2tNzHrUBALOSRvl/MI4Rxke39tTdz8+pRz/+4EpmEAnLCo8Tps6RQuE5SVosR7Jz2JTGSBTz9cf9b7QzSRp1OV+RSfNt27RIIs1cpvMY4vvaR1e+eB9ga3CLs1+3ox0hR1YCk3IhJWmU68P803fzBvWLeIR9iQSvTFpPdeyVOk05L4rpvKR92ygyu6gy/kT0ZX72FgsrmJIeTkZJGhN6aQSAEvOTxoYwqqM31f2rz6vvvnxW3b/xkitZRh7/GmnxgtRJTBxGck6Slgpi7lqCCF8oZ/HrUEodrXYmSWMqqO51tt+ZvkS00qX55D7AVmBkJxWhzCKelauKlA2kTjAyNdyVnHxdk5XGRFSyfUjI1tMYe57kMboTRRO6XweDnbcNIpLEwq8THOj0VBY9hTnv5q8VyX0H2GZmJY1y0ktLGNXtN8wu40/fvGy+jiPYoavJ3Gmm1fIb3G7fILzYzU0aw/wpbWm0BPcBNh6zMJcW8WghjncCi+UCcqJlRDNTriRlpfzCoEwkLpZSvSGDPI2xl8nLkkXS8vK7MXSSXJFjL42hUOciK4F6DvcWanGw0bMIcGLmJY1yyktDGNXt19XxZ0/1X3OIIMW2FUjSUFwu7oYydRppVqKq0ihyFgqeIawnJ2KNdowY9nJnd/dcG2Ol0bUR7oDmRTKkII3V+wAbTWUXbyBKoUhVy/UMha0kXyXZqstaqf7umulne3ev2c/B2H2dx/J3GB1ST152cm1sIIEIlu5ZJ40pUrZYSAjeI828ANvNrKTRHA3YEEZ16zV1fFnLov9aoHsc6iJyFyNQp5xmJNCnaTGSPzKpiJb5XcSoAkt/vSBijXbCce9oqZ2802iw4ti3k8ptSqGvmup9gM0lWOTD6NZjI0j+eiCJrXKOgShJfTmpMu1kJLSU35EXMZGLcp9yZOspjd1c76VR5NK3ldud9GmbLIxGlmWcwWT7a9l5zd2UigjaupL3h3sPjrm/ANvGvKRRTnlpCKO69aq6c1mk0X0FgK0nL3llpuaH1eKluCZu9vdedb5wp3akNHrxrNXv87DzCNAzK2k0RwM2hFHdekXduSTS6L4CwJZTegRdYmp+AAAQ5iWNXzxt/qfdJq6cM3/oIiG/uyiPomVnUUTx6NKT5uvxledcyTmTPuq1sZ6PaTdpLAAAADCFWUkjAAAAAMwTpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADSZlTR+f/iMevj1BfXw+gX1QOLaBXX/q/M2rp43Z1NLyHGDD2684EoBAAAAwFkzK2kUYVTffqLjYx0Lpe59pONDHR8odfd9He8pdfyujnfs6TEAAAAAsBLmJY3XRRrbwijnU5vTYwAAAABgJcxKGuWR9BhhlPOpzekxc0bOiK6cPX1qjG3HnD0dni8NALAu2PO2myf6HS6Gx0NWzp4OkWMJOTEQoM68pPGalsYRwijnU8vpMXXi00tWfmrJaGm8qfZ3dB+X7eAspNGOoTyE5CSZLqMbe5j2xK7ODRuBLNZydq+J9Ng+OcqvkFYtJ9iyxbOj5QziFxfqkj+bOImBGLj85vLoPrv8VRr9bKYL+Tzducs+tsJ2ZC7qxz8eLvr07nukEeDUmJU0yh+8jBFGOZ9ajhosYyWllxiRkxXLyBSZ29nRQrdk/1a1o1mlIo3Sv+heaPS1HWOvmXK5/CunJcHQRi/weweqW9+NjHnRsrtGnQhFae1y8nqxKMuWLP7ZtFAOA/r8rbb7soe6/bKIjO+nCF8+vV6HtF+qdxOwYx8Z/p7J/e3uX3Avc9Jo7m2mrkwgkgA9M5TGtjCqo7fr0mhE7DGL1EiZu7mvhVEL1MXdJSVl1tKYyntKoZzZFX2cO45I4+kT7BIN5M0KUn5xDsoFlKUpn1+QMsM2yvmraSIdoWAWKPbTCc7BCPnL1ZEfy+ZR3P3T85/OiZFwn7kihV254+Po/g3aStIBYG7SeFVL4whhVEdvqXtXzrlSOVqyEj8utbtentNJM9GUOZET98h4IH9eXFy9XVqlnVS2wtdRmtSh2923u3oS9bG0BK4gWU2hLclZS9pc/y/KmGwfTV63SzkYjxl7P56wXpF2f92OMxl7Yd77+kv3CSLMIu5EUb5PTKAoV2G5gGr+nMxNvS4U2haK7Sfk8/WSHKUbmR4jyH4X0ke+jxuBzEnGGsPH0BYRfD0XJq/MT5Au9zFTh51vXcbd/14aXV2ys5zcC4BtZ1bSKP8PxjHC+OjWnrr7+Tn16McfXMkMnUCkwuOEo1vZQ0E5SVosI7Jz2BSISKry9cf9b7QzSRp1OV+RSfNt27RIusxcpvMYEs5FwJlKYzBuf6+j8fj+6rp2gz6EY0nnqyNtP39vbLr9vj4/W45bnP26He0IObJylZQLKUmbXB/mL+9k5vNrcm17ySj0KUeun+G1KN3UP0YaY8x8lsR37UkEUJB5SsYrc7C3WFjBlPTwBpWkMWGw0wgAA+YnjQ1hVEdvqvtXn1ffffmsun/jJVeyTLeT5A3AC0YSRpJOkpbKUe5agghfKGfx64w4tdpJJSh8HaXlJMi9zvY705eIQnpzDkr1Bv0xffXzHV4L+996rWsc7CgKvu4476BfMo6ubB/2XrXmZrsxQpOKUGYRT8UoWy4gK1JGujK7bhOvt9oWpP0xojboZ7Kz2RJCoZ2n9oh9A4gkMT/WwwOdnsqip/B+63dqG7GxQg4wnVlJo5z00hJGdfsNs8v40zcvm6/jsHJgFvaayJxmWi2/wQtLGl5oMjLSaudMpTEVq5CSOA3lLaZQbtTchfVWXptxBzKezpHB9qOXx6Rf1f6Uxg5mYS4t4tFCHO8EFssF5ETKyF6mXEm6cvnHtG0ZJ2px2+lj5SAqYlLqf8+GS6Mg7xkzV5Vxemns8hYiO9d6DvcWanEw5t4DbC/zkkY55aUhjOr26+r4s6f6rzlEDGLbCqRCvo8X+Yu7oUydRpqTkJr4iIgM5CWsJycjjXaMEPXyZHfXXBtjpdG1Ee6A1qVJKIuT7UPYlkbXV9ylM/OS5B+Q9r/yOul7Oif7XdthX9J+2TkJ+9nf+/LYt5rS7p4heVwcSmS1XM9QpEqPoEtClclfazvZxTLCOWIHqiV8UbppP7OLlhnrcfBS0sf0Za0JRHB4jx3JPeqQssVCQvAeaeYF2G5mJY3maMCGMKpbr6njy1oW/dcC8ePIZFE3AnXKaUZ2fJoWFvkjk4pomd9FzJhGf70gI412wnHvaLGZvNNosJLUt+PLlbB97fPrCMce9VlHN6hGuSIVSTSEr+M2ojnRmPn2bQeT3c2j70/x3hfu07ZT2O3p1mMjSP56IGqtco6BSEl9OXEy7WREMJe/0bZ9bO2vt8VWOCtpjHYsN1gYjRDLGIM3gL82mFeZv5zwVUTQ1pXcS/c+KBQB2GrmJY1yyktDGNWtV9WdyyKN7isAbD1DsaozNT+sFi/FNXHrJN5L8wRp9OJZq9/nYecRoGdW0miOBmwIo7r1irpzSaTRfQWALWfq7/Rtwe8AAgCcAfOSxi+eNv/TbhNXzpk/dJGQ312UR9GysyiieHTpSfP1+MpzruScSR/12ljPx5mbNBYAAACYwqykEQAAAADmCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACazEoavz98Rj38+oJ6eP2CeiBx7YK6/9V5G1fPm7OpJeS4wQc3XnClAAAAAOCsmZU0ijCqbz/R8bGOhVL3PtLxoY4PlLr7vo73lDp+V8c79vQYAAAAAFgJ85LG6yKNbWGU86nN6TEAAAAAsBJmJY3ySHqMMMr51Ob0mDkj5y2POkf5hIxtx5ydHJ7PDACwLtjztpsn+h0uhsdDVs6eDpFjCTkxEKDOvKTxmpbGEcIo51PL6TF14tNLVn5qyWhpvKn2d3Qfl+3gLKTRjmH6ENzYu/u0q++aZ9k6YTbIYi1n95pIj+2To/wKacuW88gZxC8udE7/vc9fkI4wf7Vtj+1D++zqYb7uvOQksv0q9GVSHRtF+/jHw0Wf3n2PNAKcGrOSRvmDlzHCKOdTy1GDZaww9sIhAhIKyQqYInM7O1roluzfqnY0qywheEZi0zL6vnVjQRrXG73A7x2obn03AuTEzO0adTIVpS1brkcWf5vHSlsnAmPyF9vu8dIWymCM7aeUXSwachkKa8S4vhiKdawvdv5Ghp8nmYduzoL5k7lLbdDMZ6auTCCSAD0zlMa2MKqjt+vSaETsMYvUSJm7ua+Fcf+mzr6kIK2lNI7JjzRuFiJwbudnIDm1R49TywX5zfdh/jDNk7vmyaQ5MTloyaDjsJFP0sdJSbmf4+tYP4q7f1r60nk1Mu8zV6SwK3d87ATTMmgrSQeAuUnjVS2NI4RRHb2l7l0550rlSHcaU+JH1yJtPaeTZqIpcyJG7pHxQP68NLl6u7RKO2b3LtixDF9HaVKHbndft+nqqI+ltQuaEzx7LaxXBNn0dZTUI40bRbhTltn5KcrV1HKSJ9ih63cRNZnyaf6IsG1DL6ktGfRU86VtGykuCOygL45a/zcBmZP0nmnCx9AWkWothSav3KcgXeYoU4edb13GzV8vja6uPT3fGzuxAMsxK2mU/wfjGGF8dGtP3f38nHr04w+uZAaRsKzwOGHqjCWUk5OkxYIjO4dNaYxEMV9/3P9GO5OkUZfzFZk037ZNiyTSzGU6jyEFwYvGF+RJBdm0L2MNx1uoE9YPtzj7dTvaEXJk5WqJcvI6zGLKiAC4SNtI83ckbQthW9n+Zijny+ySmjYz0pjpi6W2Q7spJAIoyHwkomz+cbBYWMGU9PjG5aUxoZdGACgxP2lsCKM6elPdv/q8+u7LZ9X9Gy+5kmXM7lYoSJ1MxmEk6SRpqSDmriWI8IVyFr/OSFOrnUnSmAqqe53td0vgSulBO2H7xbmR/EjjJmGlLVn0M4t4KldLlTNyFezGDSTM7iB1VaT5HcW2A1E5sTQW2k7J9sUzso61R8bZzX3+Mf3hgU6XfDnrK7xvwn9MVGOTd3IBJjIraZSTXlrCqG6/YXYZf/rmZfN1HHb3zAhITeZOM62W32D7NBTRijS12jlTaQzzp5QFz4uw/91NdzVp34M0bhJmYS4t4tFCHO+YLVvOCFZQLn0thBJXSh+2bdtZRijC9kJK10OK8+AYU8fGIPfezHlBoAUvjV3eQmTvmZbRvYVaHJTnGwDmJo1yyktDGNXt19XxZ0/1X3OIIMW2FUiKlbUw+eJuKFOnkWaFpyqNImeh4BnCenLS1GjHiGEvY3aX1bUxVhpdG+EOqOlrbSzZvjqk3Z1dtZtIp+1bfM227ftYqRPmT3UXLHmsGsrgsuXSNMHUVdppLOUft3M3Vtjy+fK7ZVF/m30p1LGpBCIY3bMQmbNcopQtFhKCuWzmBdhuZiWN5mjAhjCqW6+p48taFv3XAt1jaReRfBiBOuU0I4E+TcuQ/JFJRbTM7yJmjKi/XpCmRjvhuHe01E7eaTRYcezb8eVK2L72+XV0fXJpmbGm8ymRPp4P0+riCrMiWOTD6NZjI0X+eiBHy5aT67kdpKS+qJ40f6vtgBNJoxlDRgjN9UBean0p1bFhyPyZsQc3wV/Lzmv+ZhVF0NaVzKOb+0IRgK1mXtIop7w0hFHdelXduSzS6L4CwNYzVuI8U/PDavG/DlATN/v7njpfuEs9Uhq9eNbq93nYeQTomZU0mqMBG8Kobr2i7lwSaXRfAWDLmfqodsse7QIAnBLzksYvnjb/024TV86ZP3SRkN9dlEfRsrMoonh06Unz9fjKc67knEkf9drIPa2dP5s0FgAAAJjCrKQRAAAAAOYJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJrMShq/P3xGPfz6gnp4/YJ6IHHtgrr/1XkbV8+bs6kl5LjBBzdecKUAAAAA4KyZlTSKMKpvP9HxsY6FUvc+0vGhjg+Uuvu+jveUOn5Xxzv29BgAAAAAWAnzksbrIo1tYZTzqc3pMQAAAACwEmYljfJIeowwyvnU5vSYOSNnRK/irOSx7ZhznsPzpR8XhTO1l6U6fvmfkbfOzQaA+XNsjhZsnuh3uBgeD1k5ezpEjiXkxECAOvOSxmtaGkcIo5xPLafH1IlPL1n5qSWjpdFK1BPLdhBpRBrniizWcnavifTYPjnKr5BWLSfYssWzo+UM4hcXOpcQtuOvJUT5PY02Oir5onEU2u4o1TO2H9uAzEX9+MfDRZ/efY80Apwas5JG+YOXMcIo51PLUYNlrDD2YiKismJ5mCJzOzta6Jbs32g5nQtnKY1p3XOVxlOeg1miF/i9A9Wt70agvDjZXaNOhKK0djl5vViURUoWf5sm+XtZO9RlcvLQ5++RayJ7ZVlr9EX6HY6jwbC9cWPdVOzYR4afZ5H/bs6D91FOGs37KlNXJhBJgJ4ZSmNbGNXR23VpNCL2mEVqpMzd3NfCuH9TZ19SIpBGpHEtCHaJBjt7VpDyi3N+d0kEMC9S+fyGrMhl8jv5OBgpa8O+yHgKfcjRaK881s2nuPun72U6J0a8feaKFHbljo+j98KgrSQdAOYmjVe1NI4QRnX0lrp35ZwrlSPdaUyx6f7RtUhbz+mkmWjKnMiDe2Q8kD8vFq7eLq3SjnkEHUhS+DpKkzp0u/u6TVdHfSwt8XL1XZQ2bBkz9zIm97qvPxlXmL8jThs3z8n17lrfdxH0vlxtTFJu7Hg0Zm59vfFYhm3m+inE14vz1eVfM8wi7kRRvk9MoChGYbmAav6BGFqyZQb5e4EdK2uDfIEEDkVFhDkUynZ7Y/uxkch8Je8VIXwMbRH513Nt8ibSnnm/Gcy90GXc/e+l0dUlu9RbOu0AJWYljfL/YBwjjI9u7am7n59Tj378wZXM0C3wqRw4IehW3nDX5yRpsSzIzmFzgY9EMV9/3P9GO5OkUZfzFZk037ZNi6TIzGU6jyGuPt8PP/dR/b58ZlxR/fl5GDfPYV5B8rt607mpMnE8u759TTiWYpu5fpbGbL+vz//McYuzX7ejHSFHVoySciE1wYryezGo1BNeD+sttZEyyGdEN6jX9MFJTPi9Zkx7Y/uxmWR2bWUOk38YyHtqb7Gwginp8U3NS2PCYKcRAAbMTxobwqiO3lT3rz6vvvvyWXX/xkuuZJlup8ev0F4AkjCSdJK0TlwcuWsJIjyhnMWvU7HQtNpJJSV8HaXlJMW9zvY705eItL7a61xdwTVpf+l5TuuWdsMxS11hvwR/PUyr9V9IX+uWs7uYpTaTftbGPBjTemEEMX38m1nEUzHKlgvIipQRsuGupEfKRLuKaf5k13GsrA3yJfUI2bpGtje2HxtLJImFX1c40OmpLHoK7ze/C9yM5F4CbDOzkkY56aUljOr2G2aX8advXjZfx2EX705KBlLkOM20Wn6DF4o0vHBkZKHVzplKYyo+IWl9tdc5CQqu1eatNf5B3dJuMB8Gm2cociETxmPmNZD99B4Y0jaTftbGPBjT+mAW5tIiHi3E/SNaoVguICdSuR3MmFg44vy2D8tIw6AvkeRYhv0d315urFuHvGfM/JT/IWHmXe5nl7cQ2fup3xt7C7U4qL/vALadeUmjnPLSEEZ1+3V1/NlT/dccsnBHq2y46Mv38SJ8cTeUqdNIc5JQFAGNiMJALsJ6crLQaMcISy83dvfLtTFWGl0b4Q5oXWqEtL7aa9fnYGBRP1374bjHz3M6Z5K/H/9+Ui5sI6bWfyF4ncxNOuf5NnP9jPvTj7nV15mS7uJFxJJoFnm/kFfL9ZQkLHLGZOfJSGInDJn8CWNlrdSX7poZk5Od8PuEUntIoyYQweI9S+53h5St3ejwHxPNvADbzayk0RwN2BBGdes1dXxZy6L/WiB+XJgsukagTjnNSKBP00Ihf2RSES3zu3gZE+ivF2Sh0U447h0tHpN3Gg1WYvp2fLkSFakyhK/duHTfivWfYJ678Ztr0m5ft5lbXzYz9z3Tx+PrjeZcU2oz7qe5UBjzmkpjYbenW4+NPPnrySPiIL+PdB0fiJTUl9lBso+5fT1BO4X8IctLo+D+mCLtP9I4CRm7mcPgDeCvDeZkCWm0dSX/SHHvwUIRgK1mXtIop7w0hFHdelXduSzS6L4CwNYzVay2WcTWAf/oviZu3T8Iwl3qkdLoxbNWv8/DziNAz6yk0RwN2BBGdesVdeeSSKP7CgBbTv6PI8pMzQ8AAMK8pPGLp83/tNvElXPmD10k5HcX5VG07CyKKB5detJ8Pb7ynCs5Z+RRpn3kGMbaPW40bNJYAAAAYAqzkkYAAAAAmCdIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaDIrafz+8Bn18OsL6uH1C+qBxLUL6v5X521cPW/OppaQ4wYf3HjBlQIAAACAs2ZW0ijCqL79RMfHOhZK3ftIx4c6PlDq7vs63lPq+F0d79jTYwAAAABgJcxLGq+LNLaFUc6nNqfHAAAAAMBKmJU0yiPpMcIo51Ob02PmjJyRXDl7+tQY24452zg8P3lDGYyzPxt6d/8Ec7Cq+7ly0nO1AebIsTlasHmi3+FieDxk5ezpEDmWkBMDAerMSxqvaWkcIYxyPrWcHlMnPr1k5aeWjJYMJzXLdnDjpLEgMdL/JcZ5c3+nn9uTzAHSOB1ZrOXsXhPpsX1ylF8hrVpOsGWLZ0fLGcQvLtQlfzZxEgMxcPnNZfO9zzvmqMFKX6JxuPoHhPOQ5In6MkKYNp728Y+Hiz69+x5pBDg1ZiWN8gcvY4RRzqeWowbLWGHsPUzEbFdfXSFTZG5nR8vMkv3bOJk5oTQmXNx9Qu2chhEhjRPRC/zegerWdyNQXorsrlEnWlFau5y8XizK0iiLfzYtlMOAPr8VuE4cpO2wLxGNvlTLeqSOvj+Hup5ebjJ9yfR9U7FzOzL8PMv97eY8eB/J3KU2aOYzU1cmEEmAnhlKY1sY1dHbdWlcUjBOlZGSITthIjUiN0ttNiKNVZDGFme40xghEuR2fgbyVnv0GJQLEMHKS2M+vyBlhm0E+QeiJ/3K1xUy7Mu4cgOi9qVf4RyVx7XJFHf/9Fyl91/ydnJYkcKu3PFxcK8zbSXpADA3abyqpXGEMKqjt9S9K+dcqRzpTmOKTfePrmOpOJ00E03JkB1Qt2APpMQ+tt696Ort0irtmMevwY5l+DpKkzp0u/u6TVdHfSytXdBcX5NrLuJ7EqfZPri+hd0RIml0eXL9D8YpwujTzRjS+cm274nTTET3J6XSJ0O+rVhqbZ5ujlqiasbT1xnvrKf3Q8j1YdjvpX9VooZZxJ0EyfeJCRQlMCwXUM0fiZ9jzPVBnprM9gz64na8DvT1oaiIMJelNqwn2jGVvrU6sonIfGXGHT6GtohU67k2eRNpL82duRe6jLvnvTS6umQXOGoDAGYljfL/YBwjjI9u7am7n59Tj378wZXMIAuuWQRT4XGLZLcS+wVWvj9JWrhoS/O67apkaCIpyNcf97/RTipF4esozdaT/10/mxYJj5nLdB5Dcn3NXIvqybRjSOfBIX1M5SfX/2ic0mTQxmAOTvN+VvpUaSv6nUs9P+ZXFVzGWChTdB27QX+iuc3dD9u//HyX+n1KuMXZr9vRjpAjK4FJuZCSNMr1Yf6y/EX50/ZENgrthwz6kpYz9TqJCb8XXJu5dsw8uTSJ3Hg3n8yurcxZ8g8AI9iLhRVMSQ8nc6Rw99IIACXmJ40NYVRHb6r7V59X3335rLp/4yVXsoxZlMNF0SyusqDGYRbTk6SlQpG7lpBKQfw6lBhHq51EmKLXTWFyr7P9zvQlIpfeuFacn7RvDul/l7/S/2QOitIo7S99P51omfD9aMxp0IYP01bQp4u7kl/XY9oJymfbs3TvbxN+3Jm5Hz3fYbsnx4pPsuhnFvFUvLLlArLSaARsuCs56boTPhNmt7DcB09WGhOpyfY3QfJ05Uzfwrbt7tdWSo3MRTef+cf0hwc6XfLlJqjwfguFvBrJvQTYZmYljXLSS0sY1e03zC7jT9+8bL6Owy66dVnRnGZaLb8hFIEwJi784bVEmKLXUVpFFLL9bolEpq+ta8X5yZXTRPkr/U/moCqN2fY1ubRafsPUOfX4fLq8yeNeX9R9rbVnxlIYm6ljxHvHUOn3CTELc2kRjxbieCewWC4gJ2FGNDPlcnmFUv4eEZSMbCYM6o8kx1LqQ0wvRLm+jatjQ+lkviLxXhpD8c9FVgL13O8t1OKgdbcBtpt5SaOc8tIQRnX7dXX82VP91xyygMYrZrAwyvfxgnpxN5Sp00izi3ZVMmQRD+TGEtaTWfhb7Rhx6Bd8uwvl2oikQuopiYJto5MRoSlMub66vgUXo/64dvrki2rftRnnE9I+VfofjVO6XhKrtH3JW0pL5jlLpU/VtqRbO+axtJ8r/zq6BynJPYnnLHc/0j74+a71+wSYnbKScCWPi0OJrJbrGQpU6RF0fmeqnL9nrKSV+tJdM2NyfUi/DzpgRDGah7DfMo4t3WkUAhEszkEynx1StjpxwXukmRdgu5mVNJqjARvCqG69po4va1n0XwvYRVQv9C6iBdTIwymnGQn0aXrRlT8sqEiGyEwoVJ7+em7h1zTaCce9o8Wkk6SBMNVEwQpG304vOHlyfXXXdB+K9UTzGaeZeejSEomt9T8ap60nL42aU7yf1T6Zl5W2XFp3zbwO68ph59fXF91rP/dhG0LUB5/3jKSxsNvTrcdGivz1QBJb5RwDUZP6cjtIpp2MhGbzW9nzbY4RRiEvl1byBv03/ell0D6G9/mSfiZzsY0uI3Nrxh8M3l8bzLnMbW6SKiJo68rP+zbON0CLeUmjnPLSEEZ161V157JIo/sKM6UgLgBnQF7cykzND6vFy3tN3DrhDndnR0qjF89a/T4PO48APbOSRnM0YEMY1a1X1J1LIo3uK8wUpBFWRekRdImp+QEAQJiXNH7xtPmfdpu4cs78oYuE/O6iPIqWnUURxaNLT5qvx1eecyXnTPqo18Z6ytSUsSCNAAAAm8SspBEAAAAA5gnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmsxKGr8/fEY9/PqCenj9gnogce2Cuv/VeRtXz5uzqSXkuMEHN15wpQAAAADgrJmVNIowqm8/0fGxjoVS9z7S8aGOD5S6+76O95Q6flfHO/b0GAAAAABYCfOSxusijW1hlPOpzekxAAAAALASZiWN8kh6jDDK+dTm9Jg5I2cXV88qPiXGtjPqPOM1ZMy4NnXsAFuDPRe8eaLf4WJ4PGTl7OkQOZaQEwMB6sxLGq9paRwhjHI+tZweUyc+vWTlJ5OMlkZ7csoTy3Zww6Tx4u5wLm7u7wzG2F2LxuXmMrjvwzywMmSxlrN7TaTH9slRfoW0ajnBli2eHS1nEL+4UJf82cRJDMTA5e8vF+o3+Xw9Y44hHNbTnZecRF1W4nqWq2MTkHmoz/vhok/vvkcaAU6NWUmj/MHLGGGU86nlqMEyVhh79xCZ2NVXV8gUmdvZ0VKzZP9WtaO5Kgbj8SIYS5/I5c7AAjm6cD7oBX7vQHXruxFBL2Z216iTqSitXU5eLxZlaZTFP5s2kENLn79WvxW3TiqkX2E/I8b101DoU4iXxGI9I+pYN+z8jQx/H2QeunsSvI9y0mjeV5m6MoFIAvTMUBrbwqiO3q5LoxGxxyxSI2VOdsxEfkSClpKdTZPGwa6g/ANgV+1G8yNymNs5RBrnS7BLNJCc2qPHoFzAYVHG8vkFKTNsY2T9A0mUPufbCSn305LvU4AToYNKPc061pji7p++H+l8GLn2mStS2JU7Pg7uZ6atJB0A5iaNV7U0jhBGdfSWunflnCuVI91pTIkfXcc7VqeTZqIpc4H8FHbYdi+6eru0SjtGuIIdy/B1lCZ16Hb3dZuujvpYWrugub4m11zE9yROs31IxE/mRb8wj6P9xeK4krKedF5g9ZhF3ImifJ+YQFGuwnIB1fyR3DkmXh/UP8hXE92eYj+FtE4j06GI9m1MHu+mIHOSmeTwMbRF5F9LocmbCL3MUe5GmfnWZdz89dLo6trT77uNnViA5ZiVNMr/g3GMMD66tafufn5OPfrxB1cyg8iGkZFUFpwwdY4UisZJ0mJZMb+b15LGSBTz9cf9b7STylFRrmw9sYT5tm1aJJFmLtN5DMn1NXMtqifTjiMUxG4HVvrox+lE0hCNy7fZh6k/ygMrxy3Oft2OdoQcWSlKyoWUJEquD/OXBS+fP1N/2hcRkULfQkr9zPbJtNHLTlg2X884cV1vEgEUZJ4SUZb31N5iYQVT0sNJKUljwmCnEQAGzE8aG8Kojt5U968+r7778ll1/8ZLrmQZIyAiEF4yOpnMyMVJ0lJBzF1LSH8vL34dSqmj1U4qR+HrKC0nqO51tt+ZvkTk0hvXavMjfTVpQb+C76N5isaVa1OTzgusDCOI6ePfzCKeSlG2XEBWoox0ZX63b+p1TbZ+J4omtLQcDHa7huRlT1Np2yBtBWI0abybhoyzm4vCrxMc6HTJl7O+wvutu5etSAQVYJuZlTTKSS8tYVS33zC7jD9987L5Oo5gh64mK6eZVstvcLt9g6gIUKudVI7C11HaMtIY5k/JyVrjWnV+pH+6r9LnII/ddUz6Eo0r16YmnRdYCWZhLi3i0UIc75gVywXkJCq3gylkhUtTyi+UyvSIvLSFrVRPvX47Hy2Bafdxg+iEvSLqXhpDuc9FVgL1/dxbqMVB644CbDfzkkY55aUhjOr26+r4s6f6rzlEEmLbCiQpEEjHxd1Qpk4jzcpLVRpFmgYiE9aTE6BGO0aOeqGyu6yujUicpJ5QAkMRs22EO6Cmr7WxZPvq+hZcjPrj2umTL6r9oE0jiHp+B/3Q13bDviCN86S6C5Y8Vg0lcuTu2VCYSo9q8ztT5fyWlpCNFbZ8vkKfzNjzUjSspzSuDSUQwdI966QxRcoWCwnBXDbzAmw3s5JGczRgQxjVrdfU8WUti/5rge6xtItIJIxEnHKakUCfpgVM/sikIloiRaFQefrrBQFqtBOOe0eka7I0Clbo+nZawlWWRhG/Yj3RfCZpbpxxna5f4cVoXEjjbCjs9nTrsREkfz2QxFY5x0CipL7cDlJJQkv5HUNJi3f/xgijkJXGWp/GSmOpjg1Dxm3mPHgD+GvZec0JX0UEbV3JPLr3YKEIwFYzL2mUU14awqhuvaruXBZpdF9hphQEDuAMyMpZhan5YbV4Qa+Jm/29V50v3KUeKY1ePGv1+zzsPAL0zEoazdGADWFUt15Rdy6JNLqvMFOQRlgVUx/VbtmjXQCAU2Je0vjF0+Z/2m3iyjnzhy4S8ruL8ihadhZFFI8uPWm+Hl95zpWcM+mjXhvrKVNTxoI0AgAAbBKzkkYAAAAAmCdIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaDIrafz+8Bn18OsL6uH1C+qBxLUL6v5X521cPW/OppaQ4wYf3HjBlQIAAACAs2ZW0ijCqL79RMfHOhZK3ftIx4c6PlDq7vs63lPq+F0d79jTYwAAAABgJcxLGq+LNLaFUc6nNqfHAAAAAMBKmJU0yiPpMcIo51Ob02PmjJydXDl7+tQY2445fzk8X3pDGDOuTR07wNZgz/5unuh3uBgeD1k5ezpEjiXkxECAOvOSxmtaGkcIo5xPLafH1IlPL1n5ySSjpdGenPLEsh3cMGm8uDuci5v7O4Mxdteicbm5DO77MA+sDFms5exeE+mxfXKUXyGtWk6wZYtnR8sZxC8udC5HVF9w3ZPmL9TfnXXso20wlX42xhBxWvWsOzLW+vGPh4s+vfseaQQ4NWYljfIHL2OEUc6nlqMGy1hh7N1DZGJXX10hU2RuZ0dLzZL9W9WO5qoYjMeLYCx9Ipc7Awuc69GFc+3XWaIX+L0D1a3vRty8mNldo050orR2OXm9WJRFSRb/qO6wvgx9/nr9h5U2Y2r1jBtDiJfVXN5a2jpj52hk+Psr8t/d6+B9lJNG877K1JUJRBKgZ4bS2BZGdfR2XRqNiD1mkRopc7JjJvIjErSUVGyaNA52BeUfALtqN5ofkbDcziHSOF+CXaLBzp4VqfzinN9dKgtcmF/qHZaNGV+/XJsqEDXRHCWhToQOcnlraRtCcfdPS186ZiPQPnNFCrtyx8dOMC2DtpJ0AJibNF7V0jhCGNXRW+relXOuVI50pzElfnQd71idTpqJpswF8lPYYdu96Ort0irtGOEKdizD11Ga1KHb3ddtujrqY2ntgub6mlxzEd+TOM32IREsmRf9wjyO9heL40rKetJ5GeDm46LkC/opbUd9c5j6+n6H7Zl+dmnSZjKXhfvY11+672uOWcSdKGZ2fooCFZYLqOZPdp5EqgbC4AnzBwzr9zuEPoZ9yjFJGo1MhwLby3SpP/m0DULmJHmvCOFjaIvIv74vJm/yj4XM+81g5luXcfe/l0ZX156+xxs6rQDLMitplP8H4xhhfHRrT939/Jx69OMPrmSGbsFPZcEJQrcSh6JxkrRYHszv5rUW/EgU8/XH/W+0k8pRUa5sPbGE+bZtWiRJZi7TeQzJ9TVzLaon044jFMRuB1b66Mcp9UR993X6Nvsw9Ud5crj5COuX16U2doP7Go6p2I7tl6/Otld6L2Xmbd1xi7Nft6MdIUdWfJJyISVRkutdfiOcweuBlCX5A1oiZsaQkc2UWj2DtKR/YXqat5a2WWR2i2WekrmX+7G3WFjBlPTwppakMWGw0wgAA+YnjQ1hVEdvqvtXn1ffffmsun/jJVeyTLfz41dsLwRJGLk4SVoqiLlrCenv5cWvU9HQtNpJpSV8HaXlpMW9zvY705eIXHrjWm1+pK8mLehX8H00T9G4cm1qBmP398/Xnc5H67VUme4oCr7uOO+gXzL2rmwfdkyFMawpRq7Sx7+ZRTwVn2y5gKwoGekKdgAzu4hRuTR/QFvE8o+1U2r1VNtI+h7lraVtIpEkFn6d4ECnp7LoKbzf+l3jRiTvIYBtZlbSKCe9tIRR3X7D7DL+9M3L5us47GLelJXTTKvlN3jBSKMiQK12IjnShK8H4hSKTS9k+X4H6VlyotO4Vp0f6Z/uq/Q5yGN3HZO+ROPKtalJ52VAOh+V16aukrR6bD96eUz6VR17YQxriFmYS4t4tBD3j1qFYrmAnCgZ0QzLRbJhCcsN8gfk6o85S2m085EXmIVaFNM2WG7kPWPGWZlzL41d3kJk50nfT5nbg/r7DmDbmZc0yikvDWFUt19Xx5891X/NIQt5tOqGEiDfx4vyxd1Qpk4jzUlDUQw0Ig4D2QjryclDox0jML3s2N0w10YkN1JPKEVSTzw/4Q5oXXKEXF9d34KLUX9cO33yRbUftGkEUc/voB/62m7Yl2hcuX5osmIXks5H5XUyF+kc73eNhH1J+5WOXaptjGHdqOzieSnqfC2UyGq5nqFwJXUa7LUun6nbS0cuf0+u/uPgpaSPkbRJ0hj1L2ZSPZtIIIKle9ZJY4qULRYSgn8ANPMCbDezkkZzNGBDGNWt19TxZS2L/muB+PFhsggbiTjlNCOBPk0LhvyRSUW0RIpCofL01wvy0GgnHPeOSFcgNOOkUbBS07dTEy4h11d3TfehWE80n0maG2dcp+tXeDEaV2HOojw50vmovbZt+DFFc6wx98+lDYVZX/P3qvheKoxh3Sjs9nTrsREkfz15pBzk95Gu41nhKu0g5eop5rcMRSzZ/RshjMIk2UMaB8jYzHwHbwB/bTDmJaTR1pX8I8W9BwtFALaaeUmjnPLSEEZ161V157JIo/sKM2VD5AfWgqnitMmitQl4Qa+Jm/29V50v3KUeKY1ePGv1+zzsPAL0zEoazdGADWFUt15Rdy6JNLqvMFOQRlgV436/sGdqfgAAEOYljV88bf6n3SaunDN/6CIhv7soj6JlZ1FE8ejSk+br8ZXnXMk5kz7qtbGeMjVlLEgjAADAJjEraQQAAACAeYI0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJrOSxu8Pn1EPv76gHl6/oB5IXLug7n913sbV8+Zsagk5bvDBjRdcKQAAAAA4a2YljSKM6ttPdHysY6HUvY90fKjjA6Xuvq/jPaWO39Xxjj09BgAAAABWwryk8bpIY1sY5Xxqc3oMAAAAAKyEWUmjPJIeI4xyPrU5PWbOyNnJlbOnAQBgLPbs7+aJfoeL4fGQlbOnQ+RYQk4MBKgzL2m8pqVxhDDK+dRyekyd+PSSlZ9MMkIaL+7GJ6vE+e2JKk88saP2s5W48XVlfP4wdnWuAOlTLu3mvtoJysVzFc5jqS8AGWSxlrN7TaTH9slRfoW0ajnBli2eHS1nEL+4UJf82cRJDMTA5TeXT9p2RClvZewho+fP9X3jkTFX5ktzuOjTu++RRoBTY1bSKH/wMkYY5XxqOWqwjBWdXn5EqBKBOmtGSuNOYGFGIrtOWwnc2dmJ8nhu7u9YkUuksSjHxf4kc2XE0s+V64NvP0p7HDTGCDNCL/B7B6pb340Aebmxu0adTEVp7XLyerEoi5ss/tm0UA4D+vwnb9tSy1sbe0irL32ZQ93GGClaJ+z8jQw/T3J/uzkL5k/mLp0fM5+ZujKBSAL0zFAa28Kojt6uS6PsnDWE7cxZQhqNCCbSuLsvu4CpqEnajtrfD9uoCZXLn+2MSGNYv7x2ec0OZJj2uKXtcbcPy6MXcb9LNJA3K1L5xTkoFyCilBe3fH5BygzbKOef3vaQQd5JYw+p9FMEKBTMDaK4+6fHnN4DydvJYUUKu3LHx9GcDdpK0gFgbtJ4VUvjCGFUR2+pe1fOuVI50p3GFJvuH8fGO3mnk2ZikjSmQtS/TuWyE9JITCtC5SR6X3YyXd/C+kRWu9dSp68k/N4x6EuEzIEWzov9425TXOrJtGultO9T2FS3k2pCxDWZ327cpXvi58OlN+4FnDFmEXeyJN8nJlAUsbBcQDV/TqCmXhemtp1hkFfqLI3dCGVFDDN9Eab0Z+2QOclYY/gY2iJSraXQ5BURD9Izc24w863LuPvfS6OrS3ZzN3RaAZZlVtIo/w/GMcL46Naeuvv5OfXoxx9cyQydqKS7dE5sOoMIZeskabH0mEfNDVExeZzsmIjyB/WbsfhxJNe7MvZ6VJ/vkJuLrn9G1vqxxILWi1e882lpS6Ouw/fJ3wNfR7Rzqfu7G4w3HONgh9MTzrlQuyd+PnL1wEpxi7Nft6MdIUdWfJJyISVRkuvD/OXdvHx+zRJt50jzVsdu2sxIY64v7prsnGX7vzEkAijI2BPRl3ndWyysYEp6OCklaUwY7DQCwID5SWNDGNXRm+r+1efVd18+q+7feMmVLNMJkTcNLzJJGBE6SVoqiLlrCdkdxJwcuu8HbUVtpEIVkOlL13YikDqlF2Apl1TY99kJoglfPpW41uvg/pjwY/d1x3kHYzTz5cv2YftXmQ9YGUaSUhGq7bY5suUCsuJmRCqzGzfx+lJtFxjkHTH2kFZfBCm/qY+nDZEkFn5l4ECnp7LoKcx5+ti6GJs8twATmZU0ykkvLWFUt98wu4w/ffOy+ToOKyGdCJVk7jTTavkdw127UKoygqTrk0fMXZmojYokiRgmffFtV3cTB2NoiVhLEoPXRlaDsWR3F217vTzm56SrPqLVVzhrzMJcWsSjhTjeCSyWC8iJlhGsTLlcXiGXf9m2SwzyNsYeMqYvlsrvO24KMm9G4irj9NLY5S1EVgL1HO4t1OJgzHwDbC/zkkY55aUhjOr26+r4s6f6rzlEQCJbCOVFvo9l4uJuvMN18jQnO0WhsQykUSQou9Mo2Daix61jpdGlxYIWylsqdr6epM6qpAlSNq2r8Dqpy+44urHpPu134wj7kJ+TcMz9PanNB5w5pd09QyJKoUhVy/UMxa0kXyWhyuRfuu0yzX4Oxu76WuuLpAUdN/KbFaENIhDB4T12JPPSIWWLhYTgPdLMC7DdzEoazdGADWFUt15Tx5e1LPqvBeLHnok8GFE65TQjfD5Ni1H0l815RBr7MhKBEGakZ7ArmJHGuL6hDPq0ct9rYw77l2OCNCb93dGyF+40RnMTdKi7r37cxXuCND5WgkU+jG49NlLkrwdy1CrnGMiY1JcTp5J85fIv23aFbN7S2M31QF6CPvjwfbGPrf31tuiuKzJ/ZozBTfDXsvOa3iyhIoK2rmT+3NwXigBsNfOSRjnlpSGM6tar6s5lkUb3FQC2nikiJ0zND6tFdmNb4taJc7hTO1IavXjW6vd52HkE6JmVNJqjARvCqG69ou5cEml0XwFgy5n6O31b8DuAAABnwLyk8Yunzf+028SVc+YPXSTkdxflUbTsLIooHl160nw9vvKcKzln4sfCw8eoAAAAAPNnVtIIAAAAAPMEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE1mJY3fHz6jHn59QT28fkE9kLh2Qd3/6ryNq+fN2dQSctzggxsvuFIAAAAAcNbMShpFGNW3n+j4WMdCqXsf6fhQxwdK3X1fx3tKHb+r4x17egwAAAAArIR5SeN1kca2MMr51Ob0GAAAAABYCbOSRnkkPUYY5Xxqc3rMVsKZygCwbRybowWbJ/odLobHQ1bOng6RYwk5MRCgzryk8ZqWxhHCKOdTy+kxdeKTWLxkXdyNT2bpwmSwQvbEEztq/6bNH+Pq3NnXOT1hO7v6VcDF3b7+bJ3JaTGjTPC0pdGPOQg9vn2Zp6SRm/s7ydjz13oKfb25r3bcXJnyYdsuSuMz9y+TOOyHndud/I20mH74Nkv3XAjvUy0fRMhiLWf3mkiP7ZOj/App1XKCLVs8O1rOIH5xoS75s4mTGIiBy28uj+6zy1+l1M/K2AO6s5V9hB03fe7TtkN2ZN7K8yUcLvr07nukEeDUmJU0yh+8jBFGOZ9ajhosYxf53i1EXhKhM3nSa1ZydnZ2srLRCU4nJ3G9sdDo+kOJMQIZtOeEMvIffa0qOYaCiC1NoT7pXyRhNl8qTTLmcp8LdQfSOKCWJqTzaAjb8f3cVbvVviXvkcF4Pba+rp5s+zBEL/B7B6pb342MedGyu0adTEVp7XLyerEoS6Ms/tm0UA4D+vyttvuyh7r9sojU+lkbe4y0kR+jlc6u+Uod64qdv5Hh75nc3+7+BfdS5ie9V2bOMnVlApEE6JmhNLaFUR29XZdGEY+sAISUpXF3PycukqaFab8kF5qieAjSnheuRFgmEQrSaVCoz8hbKIh2vkTE+rxuTooTXas7L14iofWxZeauUF9VaLNSnBnLoO7Tnv9tQUTH7fwM5M2KVH5xDsoF1IUqvxslZYZtlPNX00Q6QsEsMOjnhLHn+ytIv8I6amNYb4q7f3r+0/tvdmZ95ooUduWOj6P7N2grSQeAuUnjVS2NI4RRHb2l7l0550rlGCNlVoLiLL0QDITDS0ZFDJuS4turyqUmFZXote+jHaN9ZJqONU4r77YJJQlKrkuf9Quz2+ovVuTPUqi7VK41Lw6Z5/ARddSngOnSmOmrG3dItV7IYxZxJzryfWICRQkMywVU8+dkbup1odC2UGw/YZBP6iyN3Qillz+/W+kj7ke0m5qpc2OQOcmMLXwMbRFx1vNk8srcBeml+THzrcu4+99Lo6tLdpajNgBgVtIo/w/GMcL46Naeuvv5OfXoxx9cyQyy2BtpKklNXRpt+VTU3PVQNowA5cQtwOXp0gfCkpBKVfTa9iUaV9RXGVe4Y1aQoQ5fXx9eiEIZE1Ey30pffN+l3XLFmmHdfQT9N7T6GZCZj1y5qtzl7kn42pETUqRxIm5x9ut2tCPkyEpYUi6kJG1yfZh/id28XNteMgp9ypH2szp2U39+x9CUC+TWvHZ9kcjNxWaQCKAg85SIvszH3mJhBVPSwzkeKdVSx9j7CrCtzE8aG8Kojt5U968+r7778ll1/8ZLrmSZ7vcQB1bRkEb3vZGDUPIqwicykabZ9pPHnpU6DCOkMR5OcM3JTxplySlLl2nX9FPy+DH037flqVB3Oj4hd61IUG+lXLN/4Vzpce7vZh5PS55kAEjjeKzcJIt+bbfNkS0XkOY3GOnK7AxOvN5qW5D2izuUAYN+jhh7nuARtOl32D+7M7axwiPj7eY6/yj+8ECnS77cJBTmPJTuaoy4zwDbwqykUU56aQmjuv2G2WX86ZuXzddx2Me18drfkkaNkzv5S+JOEqrCF+/yGYkcGJOQ7gYmpCIUvc6JWHCt2r8cBbEzuDmS9oM6ZVy7F6VcZQyGQt0Z0ZsqYn4HMLcT6JlWZ+79oBnMZ22+IMQszKVFPFqI453AYrmAnGgZ2cuUK0lZLv+Yti15eUkZtN0Ye5m+vVK/2+K5xsi8GYmrzLmXxi5vIbISqOd3b6EWB2PuPcD2Mi9plFNeGsKobr+ujj97qv+aQ6QkWtVzkpaThFQIJI/sRAX5QolI2jECE6blJMRR2oE0kmPK9mk2r6/L9jEUpTjd9jkc/sXdcj98fdF0BRhB1OUj+ZI50Neivw7PMlYac/engZsj+Uv3UrmBNCbzGhLljfIlY5gs5VtKYRfPkohSKFLVcj1DSSrJV0nuMvlrbSe7WEbcRuxANfs5GLvv67H8HUaHkdlsPkHGOEY815hABIvjTO5Rh5StTk7wHmnmBdhuZiWN5mjAhjCqW6+p48taFv3XAlakRPhsDKVojDS6esILiTTE7QT1Sb6gfR9RP9I8QWJY745IWyKNInJ92WQcRnp8Wm7sIXVp9H2M051M1yvWjJTG9PUobN01gatLoyvv5qgql9F8Tu3nlhIs8mF067ERH389ELVWOcdAxqS+nMSZdjIimMvfaNs+tvbX22IrZHcAS2M313tpFLns2mv0dVM9x8iyjDEYoL+WndfcRFRE0NaV3Es3t5s6pwAnYV7SKKe8NIRR3XpV3bks0ui+AsDWk5WzClPzw2rxwlwTt07iwx3YkdLoxbNWv8/DziNAz6yk0RwN2BBGdesVdeeSSKP7CgBbTukRdImp+QEAQJiXNH7xtPmfdpu4cs78oYuE/O6iPIqWnUURxaNLT5qvx1eecyWhjf/9zDiaT5hHcRZ1n2V/AQAAYCqzkkYAAAAAmCdIIwAAAAA0QRoBAAAAoMnS0nj7B4IgCIIgCOI0Yh1AGgmCIAiCIB5zrAOzksa//uu/Vp/89/+uPv74Y/VXf/VX6qOPFuov//Iv1Qcffqj+4i/+Qr33/vvqrz7+RP3jN99myxMEQRAEQaxjrAOzkkYRxn/7t3/r4ieJn/r4m7/5G/WP//iP6i8Xf4U4EgRBEASxMbEOnJo0/uxnP5scaR2ywyiy+K8//qj+9V9/VL/9139Vv/3tv6rfuBBpvHfvnvr1r3+tPvjwo0F5giAIgiCIdYx14FSlcQo5aZRH0iKNf/d3fzeI3/z2t0Ya33rrLRP7f/Zng/Iri7/fVU/8u311JZdGEARBnHIcq1+++qJ698tcWj7+x6/21M9/dZxNG8aY+g/Vu68eqP+RXv9yMaEdgijHOjAraZTfYRRpNDuMyS6jSONvfvNb9S86fvzxJ/Un+386KL+yQBoJoh16MTVn95rYU7/8n2G6XoBLadVyErZscaH+nwfq5y8u1P+upaGvp4+BGLj8n3bXKvVHfQvL5KJUT2XsxXx9WyJDfR/6mCJU6xkyH7X5imOaNEq06tfpTho//TC4r6E0yvsjJ5bEGob9+Wu9h+S9EP3smc8T/TP54WGXHv2sVt4f68CspFH+6EV+jzG30xiGSOMv/uRPBuVXFmcujTfVH/+7J9R/+PtcWhhj8xHEqqNfYM1rI1tefOyuTrTQdmntcvL63XDRTqIoCwM5tNHnb9Q/Wghq9dTGHobk66+bhcctQoMojGudw87fyND35NOCSOfi5786nFi/vo9Jfrl/Rt7lnuh7GL3OjIdYpxj3OeMjlkYrmqFERv/AcK9L75N1YFbSKH8lLX/wEu8w2l1G2WG08RsjjW/94u1B+ZUF0kgQE0M+TN0uzkBy7Id0fqcsKBdcTz+I+8jnl4g/3H2MrV/6WNuFysegnkljD6IirPlxbUaIiGXH5kRtcN2H3+1pyPSk+qXO3D1o9YVY2yh/zvTR//xZYUzzp3XU/nGxDsxKGuV/qyPSmNtdDEOk8c23fjEo34eXqYvqPzzxRCB47rWLn71xsy9zuK9+FqTFIhaXMxHVuaP++O/78qasiKV7HbVT60MmXdr55I0d/f2u+sTl+eT39PXf2x3k43E5MdsQ6fELuHyffGgWP5zDckFU8xcW9inXB/U7Yfilvh7uNoVlcjGopzZ2Izpl4Z003k0JmZPMAvvphzWBt7u0v9SL889/daDeLSzQJibUL/fgRf0PByP9Mu/ufZDGmPcFsR5R/LkLQvK8+6X9x18ub1xH/R+J68CspFH+P4wijeb3F4PfYeziX36j/pcOkcY3/vObg/J9WGkMRauTu8M4j5VD/f3vBdJlhM+XtRIXSqSRtlRE/Wsvi7930eY3MhrWVepDGMPr0qYRzGiXs1SeIGYURob6D8rcv7SzH85JuTBKH+b2Azy+VvugzufP1O8koctbEbww0nqqY0/rdOOP2o1i5C7lWoeMMZlnmZeKKPt7KnNt5lXfu9x7xcbY+g+1fC7Uu1oY5ZFlUdSrbRHrFoPPgUxIHvMPhsJ7okv3UXnvrgOzksb/9t/e09L4U3Z3MYwff/xRvf7Gfx6U7yMjU8HOXxjhTt8Vs6Pn05zoRZIW1BVJYyiCldcj+mAjJ4NOTkdJJ0HMI4wkpXIlAtaQxmy5ILIf5kayMo8jp17XMahf+px82Gf7kES2njHCnITkGSw2lf5vVEQSV/71A4lwLjtpTK4PYkT9Uv7dL3Wazyf3MRSBIFr3klifGPuzKf9Ika85IRzUYd47+Z/bdWBW0vjOu++qH7U0RruLv7G7i138r38x/x/H115/fVC+j4I0pvLnwz2a7uQt3B08bWks9SEKpJFY/zAfoplHf0MBi3fMiuWCGHwQ68jt4knk8kqU8ksMykRiUciTiUGextjLMZSZMe1vTHSSVhJGO4/hfITSKCHzVXxfVevXdX8o9yyQxlLoerbmnmxBjP0Ztz+/9j2YvseGdZT/4bMOzEoa/+s77xhpzO0uhiHS+Opre4PyfZSlK7z2ye/lxdDuOJYeT9u6l5LGWh+MqPp8w/77x9Omb13bSCMx06jugiWiFIrUyN2z4QdxSb5KH9Cl/DZK9XfXTD9LAtNHs5+Dsbs65ftg8TGCGwlLeeHZyOikLn/PuoU7yBeHnSvJlxXHRv02kMZti+HP7zC69555LT+X8XtsUId5r7HTeCrS+Of/5b+a31eMdhZN/Iv6//5XHyKNr7z62qB8HwWZKv6xixNBd/1nWuT630PUIVLZldNi98aSO43yutSHSBqDR+W6nT+OfofS9dX9zmSYz0svQTz2KCze3YerESR/PfgAbZVzMfgglvpyC7ppJ/MBXcrvIr9YuAWh0KdcZOspjd1c70XQiGIuX5c3v/BsUsj8mfEni7Bcay3m6U5jLqbV76XRir+9L8NotUmsT2R/fpOQPPFngfuccJ8v3Xusi/LP7TowK2n8sz//cyONud3FMEQaf/6f/tOgPEEQ2xljPtzDmJqfWG14KauJeSfVBfkvS2MvfdPqZ6eRONtYB05VGqdGWoccDWjOnR4Rf/zzVwblCYLYxpB/2U95VDs1P0EQxNnHOnBq0ngaIUcDykkv8j/ulv8Po/xvdeSvpOWPXuR3GOWRtOwwijD+0cs/z9ZBEARBEASxbrEOzEoaCYIgCIIgtjHWAaSRIAiCIAjiMcc6gDQSBEEQBEE85lgHkEaCIAiCIIjHHOvA0tIIAAAAANsD0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAABNkEYAAAAAaII0AgAAAEATpBEAAAAAmiCNAAAAANAEaQQAAACAJkgjAAAAADRBGgEAAACgCdIIAAAAAE2QRgAAAABogjQCAAAAQBOkEQAAAACaII0AAAAA0ARpBAAAAIAmSCMAAAAANEEaAQAAAKAJ0ggAAAAATZBGAAAAAGiCNAIAAABAE6QRAAAAAJogjQAAAADQBGkEAAAAgCZIIwAAAAA0QRoBAAAAoAnSCAAAAAANlPr/AV7s4NuaPIiZAAAAAElFTkSuQmCC