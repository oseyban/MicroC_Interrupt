void ButtonKesme() iv IVT_INT_EXTI0 ics ICS_AUTO{
EXTI_PR=1;
int x=0;
x= Randomize()*100/6;
if (x=1){GPIOA_ODR.A1=1;}
else if (x=2){GPIOA_ODR.A2=1;}
else if (x=3){GPIOA_ODR.A3=1;}
else if (x=4){GPIOA_ODR.A4=1;}
else if (x=6){GPIOA_ODR.A5=1;}
else if (x=6){GPIOA_ODR.A6=1;}
else {GPIOA_ODR.A1=0|GPIOA_ODR.A2=0|GPIOA_ODR.A3=0|GPIOA_ODR.A4=0|GPIOA_ODR.A5=0|GPIOA_ODR.A6=0}

//Delay_ms(1000);
}
void main() {
     GPIOD_Digital_Output(&GPIOA_ODR,_GPIO_PINMASK_ALL);
     GPIOA_Digital_Input(&GPIOA_IDR,_GPIO_PINMASK_0);
     SYSCFG_EXTICR1=0;
     EXTI_FTSR=1;
     EXTI_RTSR=0;
     EXTI_EMR_0;
     EXTI_IMR=1;
     NVIC_IntEnable(IVT_INT_EXTI0);

     while(1);

}