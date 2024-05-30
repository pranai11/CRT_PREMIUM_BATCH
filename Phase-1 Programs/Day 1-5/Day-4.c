#include<stdio.h>
void main()
{
    //conditional operators
    //smallest number
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("%d is smallest.",(a<b)?a:b);
    

    //even or odd
    int num1;
    printf("Enter a number:");
    scanf("%d",&num1);
    (num1%2==0)?printf("Even"):printf("Odd");
  

    //Bitwise operators
    int b1,b2;
    printf("Enter two numbers:");
    scanf("%d%d",&b1,&b2);
    printf("Bitwise AND Result:%d",b1&b2);
    printf("\nBitwise OR Result:%d",b1|b2);
    printf("\nBitwise X-OR Result:%d",b1^b2);
    printf("\nLeft shift of %d is %d",b1,b1<<1);
    printf("\nRight shift of %d is %d",b1,b1>>1);
    printf("\nCompliment value of %d is %d",b2,~b2);
}