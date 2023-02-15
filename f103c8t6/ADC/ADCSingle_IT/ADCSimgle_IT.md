---
typora-root-url: pic
---

# ADCSimgle_IT

In this example，I use a rocker module

![image-20230210113953062](D:/BaiduSyncdisk/output/STM-Basic-Project/f103c8t6/ADC/ADCSingle/pic/adc1.png)

It will output analog quantity when swinging the rocker.

## CUBE



1. choose chip

![image-20230208213942322](/cube_1.png)



2. RCC

![image-20230208214118321](/cube_2.png)



3. clock tree

![image-20230208214159481](/cube_3.png)



4. project manager

![image-20230208214415072](/cube_4.png)





5. LED - GPIO

![image-20230208214546246](/cube_5.png)

![image-20230208215151274](/cube_6.png)



6. usart

![image-20230208215255333](/cube_7.png)



7. ADC

if dont choose continuous conversion mode, ADC needs to be restarted after interruption

![image-20230210104430821](/cube8.png)



enable interrupt

![image-20230210154607007](/cube9.png)





## Keil

- adc.c

define flag and data buffer

![image-20230210173931291](/keil.png)

callback function：if you choose disable continuous conversion mode, you need start ADC in this function

![image-20230210173957006](/keil1.png)

- main.c

![image-20230210174618202](/keil2.png)



## Experimental Result



![image-20230210174713234](/result.png)





















































