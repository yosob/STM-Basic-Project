# Usart_Useprintf



use printf and scanf in stm32 keil.

this function is always used to debug.



**note**: 

If you open usart interrput ,scanf may not be used.



## Cube

1. choose chip

![image-20230208213942322](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_1.png)





2. RCC

![image-20230208214118321](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_2.png)



3. clock tree

![image-20230208214159481](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_3.pmg)



4. project manager

![image-20230208214415072](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_4.png)





5. LED - GPIO

![image-20230208214546246](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_5.png)

![image-20230208215151274](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_6.png)



6. usart

![image-20230208215255333](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\cube_7.png)











## Keil



1. use microLIB

![image-20230209134503572](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\keil.png)

2. main.h 

![image-20230209134636964](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\keil1.png)



3. usart.c:  reload fputc and fgetc

![image-20230209134656305](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\keil2.png)



4. main.c

![image-20230209134728463](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\keil3.png)







## Experimental Result



![image-20230209134402979](D:\BaiduSyncdisk\output\STM-Basic-Project\f103c8t6\usart\usart_useprintf\pic\result.png)





