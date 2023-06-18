#line 1 "C:/Users/Public/Documents/Mikroelektronika/mikroC PRO for ARM/Examples/kesme.c"
void ButtonKesme() iv IVT_INT_EXTI0 ics ICS_AUTO{
EXTI_PR=1;
GPIOD_ODR=~GPIOD_ODR;
Delay_ms(1000);
}
void main() {
 GPIOA_Digital_Input(&GPIOA_IDR,_GPIO_PINMASK_0);
 GPIOD_Digital_Output(&GPIOD_ODR,_GPIO_PINMASK_ALL);
 SYSCFG_EXTICR1=0;
 EXTI_FTSR=1;
 EXTI_RTSR=0;
 EXTI_EMR_0;
 EXTI_IMR=1;
 NVIC_IntEnable(IVT_INT_EXTI0);

 while(1);

}
