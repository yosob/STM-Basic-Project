---
typora-root-url: pic
---

# ADCSimgle

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

disenable interrupt , disable continuous conversion

![image-20230210104430821](/cube8.png)





## Keil

- adc.c

create a function to receive data

![image-20230210115259942](/kei1l.png)

- uart.c

create a function to send adc-data

![image-20230210115347020](/keil2.png)

- main.c

get data

![image-20230210115428910](/keil3.png)





## Experimental Result

Use SerialPlot to visualize data



![image-20230210113614199](/result1.png)



