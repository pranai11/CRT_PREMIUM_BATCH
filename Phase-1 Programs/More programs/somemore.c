
//Magic number
#include<stdio.h>
void main()
{
    int n,temp,rem,rev,prod,digit;
    int rnum=0,sum=0,rsum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum+=digit;
        n/=10;
    }
    int stemp=sum;
    while(sum>0)
    {
        rem=sum%10;
        rev=rev*10+rem;
        sum/=10;
    }
    prod=stemp*rev;
    if(temp==prod)
        printf("%d is a magic number.",temp);
    else 
        printf("%d is not a magic number.",temp);
}
/*
1729
1729 is a magic number.
325
325 is not a magic number.
*/

//LCM of two numbers.
#include<stdio.h>
void main()
{
    int num1,num2;
    long lcm;
    printf("Enter two numbers:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(int i=num1;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
    }
    printf("LCM of %d and %d is %ld.",num1,num2,lcm);
}
//Enter two numbers:95 88
//LCM of 95 and 88 is 8360.

//Spy number or not
#include<stdio.h>
void main()
{
    int num,digit,sum=0,prod=1;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        digit=num%10;
        sum+=digit;
        prod*=digit;
        num/=10;
    }
    if(sum==prod)
        printf("%d is a spy number.",temp);
    else
        printf("%d is not a spy number.",temp);
}

//Enter a number:132
//132 is a spy number.


//Binary to decimal
#include<stdio.h>
#include<math.h>
void main()
{
    int num,digit,temp,dec=0,i=0;
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        dec+=digit*pow(2,i);
        num/=10;
        i+=1;
    }
    printf("Decimal equivalent of %d is %d.",temp,dec);
}
//101
//Decimal equivalent of 101 is 5.