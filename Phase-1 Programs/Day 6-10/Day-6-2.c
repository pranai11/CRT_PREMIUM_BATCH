#include<stdio.h>
#include<math.h>
int main()
{
    //Disarium number
    int num,temp,digit;
    int count=0,sum=0;
    printf("Enter a number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    num=temp;
    while(num>0)
    {
        digit=num%10;
        sum+=pow(digit,count);
        num=num/10;
        if(count==1&&digit==1)
            sum+=1;
        count--;
    }
    if(sum==temp)
        printf("%d is a disarium number\n",temp);
    else
        printf("%d is not a disarium number\n",temp);
}








/*
    //Armstrong number
    int anum,atemp,adigit;
    int acount=0,asum=0;
    printf("Enter a number:");
    scanf("%d",&anum);
    atemp=anum;
    while(anum>0)
    {
        anum=anum/10;
        acount++;
    }
    anum=atemp;
    while(anum>0)
    {
        adigit=anum%10;
        asum+=pow(adigit,acount);
        anum=anum/10;
    }
    if(asum==atemp)
        printf("%d is a Armstrong number\n",atemp);
    else
        printf("%d is not a Armstrong number\n",atemp);
    
    return 1;*/