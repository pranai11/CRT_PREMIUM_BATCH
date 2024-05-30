#include<stdio.h>
void main()
{
    //Diff btw sum of even and odd digits of a number
    int num,digit;
    int esum=0,osum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        digit = num%10;
        if(digit%2==0)
            esum+=digit;
        else
            osum+=digit;
        num=num/10;
    }
    printf("Diff btw esum and osum is:%d \n",esum-osum);
    //printf factorial if it is even and cube of it if odd
    int num1,digit1,ocube;
    int fact=1;
    printf("Enter a number:");
    scanf("%d",&num1);
    while(num1>0)
    {
        digit1 =num1%10;
        if(digit1%2==0)
        {
            for(int i=1;i<=digit1;i++)
                fact *= i;
            printf("%d-%d\n",digit1,fact);
            fact=1;
        }
        else
            printf("%d-%d\n",digit1,digit1*digit1*digit1);
        num1=num1/10;
    }
}