#include<stdio.h>
void main()
{
    //Loops
    //No of digits in a number
    int num;
    int count=0;
    printf("Enter a number:");
    scanf("%d",&num); //52364
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("No of digits in the given number:%d\n",count); //5

    //Sum of digits in a number
    int a;
    int sum=0;
    printf("Enter a number:");
    scanf("%d",&a); //52364
    while(a>0)
    {
        sum += a%10;
        a=a/10;
    }
    printf("Sum of digits in the given number:%d\n",sum); //20
}