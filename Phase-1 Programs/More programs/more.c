#include<stdio.h>
#include<math.h>
void main()
{
    //Decimal to binary conversion
    int num,bn,rem,i=0;
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%2;
        bn+=rem*pow(10,i);
        num/=2;
        i++;
    }
    printf("%d",bn);
}
//ip-5
//op-101

// Program to find the sum of series 1^1+2^2+3^3...+N^N
#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    long long sum=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum+=pow(i,i);
    }
    printf("Sum of the series 1^1 + 2^2 + 3^3 +....+ %d^%d = %lld",num,num,sum);
}
//ip-7
//op-Sum of the series 1^1 + 2^2 + 3^3 +....+ 7^7 = 873612

//Program to find sum of series 1!+2!+3!...+n!
#include<stdio.h>
#include<math.h>
void main()
{
    int num,fact,temp;
    long long sum=0;
    scanf("%d",&num);
    temp=num;
    for(int i=1;i<=num;i++)
    {
        fact=1;
        for(int j=1;j<=i;j++)
        {
            fact*=j;
        }
        sum+=fact;
    }
    printf("Sum of the series 1! + 2! + 3! +....+ %d! = %lld",num,sum);
}
//output
//5
//Sum of the series 1! + 2! + 3! +....+ 5! = 153

//Check whether a given number is Friendly pair or not
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    int asum,bsum=0;
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            asum+=i;
        }
    }
    for(int j=1;j<=b;j++)
    {
        if(b%j==0)
        {
            bsum+=j;
        }
    }
    if(asum/a==bsum/b)
        printf("%d and %d form a friendly pair.",a,b);
    else
        printf("%d and %d donot form a friendly pair.",a,b);
}
//output
//6 9
//6 and 9 donot form a friendly pair.

//Octal to binary
#include<stdio.h>
#include<math.h>
void main()
{
    int num,b=0,d=0,i=0,j=0,base=1,digit,temp,dup;
    scanf("%d",&num);
    dup=num;
    while(num>0)
    {
        digit=num%10;
        d+=digit*pow(8,i);
        num/=10;
        i++;
    }
    while(d>0)
    {
        temp=d%2;
        b+=temp*pow(10,j);
        d/=2;
        j++;
    }
    printf("Binary equivalent of %d is %d",dup,b);
}

//56
//Binary equivalent of 56 is 101110