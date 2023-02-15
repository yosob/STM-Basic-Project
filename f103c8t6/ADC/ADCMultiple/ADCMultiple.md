---
typora-root-url: pic
---

# ADCMultiple

In this example，I use a rocker module

![image-20230210113953062](/../../../../../../../../pic/adc1.png)

It will output analog quantity when swinging the rocker.

## CUBE



1. choose chip

![image-20230208213942322](/../../../../../../../../pic/cube_1.png)



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

Enable scan mode and discontinuous mode.

![image-20230215145932959](/cube_8.png)



## Keil

- main.c

![image-20230215150726067](/cube_9.png)

![image-20230215150740693](/cube_10.png)

- usart.c and usart.h

![image-20230215150846426](/keil3.png)

- adc.c and adc.h

![image-20230215150956245](/keil4.png)



## Experimental Result

Use SerialPlot to visualize data

![image-20230215151141696](/result.png)









