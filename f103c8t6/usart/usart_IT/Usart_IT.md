# USART_IT

Use 



## CUBE



1. choose chip

![image-20230208213942322](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_1.png)



2. RCC

![image-20230208214118321](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_2.png)



3. clock tree

![image-20230208214159481](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_3.png)



4. project manager

![image-20230208214415072](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_4.png)





5. LED - GPIO

![image-20230208214546246](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_5.png)

![image-20230208215151274](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_6.png)



6. usart

![image-20230208215255333](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_7.png)

- enable global interrupt

![image-20230209165439189](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\cube_8.png)







## Keil



### fixed-length data

This example applies to the case of fixed data length

- usart.c

define the receive buffer 

![image-20230209212415419](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_1.png)

define callback function

![image-20230209212503303](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_2.png)



- usart.h

define the variables 

![image-20230209212542850](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_3.png)



- main.c

prove the code is running and begin to receive the first data

![image-20230209212800377](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_4.png)







### variable length data

This example applies to the case of variable data length.

Make a communication protocol, the end frame is 0x0a 



- usart.c

define buffer and variable 

![image-20230209233304427](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_5.png)

callback

![image-20230209233349810](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_6.png)



- usart.h

define function ,constant and variable

![image-20230209233451789](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_7.png)

- main.c

begin receive and print the data

![image-20230209233551602](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\keil_8.png)







## Experimental Result

### fixed-length data

send "1234567\r\n" twice and you'll see:

![image-20230209211936741](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\result_1.png)



### valuable length data

​	You can send any length of data **(total length of data < RE_BUFFER_SIZE)** and stm will return all your data when you send the **END_FRAME**

​	Send "21212345323\r\n" and the send "21212345323" and "21212345323\r\n" 



![image-20230209233657126](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_IT\pic\result_2.png)

