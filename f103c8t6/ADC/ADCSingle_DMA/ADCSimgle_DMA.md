---
typora-root-url: pic
---

# ADCSimgle_DMA

In this example，I use a rocker module

![image-20230210113953062](/adc1.png)

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

choose enable continuous mode or not

![image-20230210104430821](/cube8.png)



Enable DMA

choose circular or normal mode

![image-20230214211735761](/cube_9.png)



set the interrupt priority

![image-20230215105423769](/cube_10.png)



## Keil



### Circular and Continuous

ADC and DMA will automatically send data to buffer, and will execute the interrupt function when they complete a transmission.

- main.c

![image-20230215133028139](/keil6.png)

![image-20230215133038581](/keil5.png)



- usart.c

![image-20230214221235519](/keil3.png)



- adc.c adc.h

define buffer and buffer size

![image-20230214221338687](/keil4.png)





you can put the data processing function in the interrupt function

- stm32f1xx_it.h

![image-20230215133240124](/keil7.png)





### Notcircular or Notcontinuous

- main.c

you need start DMA when you need data



![image-20230214221150287](/keil1.png)

![image-20230214221158671](/keil2.png)



- usart.c

![image-20230214221235519](/keil3.png)



- adc.c adc.h

define buffer and buffer size

![image-20230214221338687](/keil4.png)





