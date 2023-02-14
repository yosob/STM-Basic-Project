# USART_Single

use **HAL_UART_Transmit** and **HAL_UART_Receive** to send and receive fixed-length data

without interrupt



## CUBE



1. choose chip

![image-20230208213942322](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_1)



2. RCC

![image-20230208214118321](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_2.png)



3. clock tree

![image-20230208214159481](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_3.png)



4. project manager

![image-20230208214415072](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_4.png)





5. LED - GPIO

![image-20230208214546246](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_5.png)

![image-20230208215151274](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_6.png)



6. usart

![image-20230208215255333](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\cube_7.png)





## Keil



- main.c / int main

![keil](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\keil.png)





## Experimental Result

send :

```c
"12345678\r\n"
```



![image-20230209143647046](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_single\pic\result.png)





