#include<stdio.h>
void main()
{
    // Print Hello World
    printf("Hello World!"); //Hello World

    //int and float
    int a = 5,b=6;
    float x = 5.25;
    printf("a=%d \n",a); //5
    printf("x=%f \n",x); //5.250000
    printf("x=%d \n",x); //0
    printf("a=%f \n",a); //5.00000
    
    printf("%d \n",5/3); //1
    printf("%f \n",7/3.0); //2.333333

    //width and decimal places
    printf("%d \n",a); //5
    printf("%5d \n",a); //_____5
    printf("%-5d \n",a); //5_____

    printf("%.3d \n",a); //5.000
    printf("%.7f \n",x); //5.2506749

    printf("%10.2f",x); //__________5.25

    //format specifiers and o/p variables
    float c = 5.2543456323;
    printf("%f",c); //5.254346(round off to 6 digits)
    printf("%d %d",a); //5 76545-Garbage value
    printf("%d",a,b); //5
}