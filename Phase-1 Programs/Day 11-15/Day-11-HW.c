//Magic number using functions
#include<stdio.h>
void magic();
void main()
{
    magic();
}
void magic()
{
    int n,temp,rem,rev,prod,digit;
    int rnum=0,sum=0,rsum=0;
    printf("Enter a number:");
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
    {
        printf("%d is a magic number.",temp);
    }
    else
     {  
        printf("%d is not a magic number.",temp);
     }
}

//Enter a number:1729
//1729 is a magic number.


//Decimal to octal conversion using functions
#include<stdio.h>
#include<math.h>
void dto();
void main()
{
    dto();
}
void dto()
{
    int num,oc,rem,i=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%8;
        oc+=rem*pow(10,i);
        num/=8;
        i++;
    }
    printf("Octal equivalent is..%d",oc);
}
//Enter a number:33
//Octal equivalent is..41