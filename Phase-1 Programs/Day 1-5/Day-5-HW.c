#include<stdio.h>
void main()
{
    //Tax Calculation
    int money;
    float tax;
    printf("Enter your money:");
    scanf("%d",&money);
    if (money<=250000)
    {
        tax = 0;
    }
    else if(money>250000 && money<=500000)
    {
        money -= 250000;
        tax = money*0.05;    
    }
    else if(money>500000 && money<=750000)
    {
        money -= 500000;
        tax = 250000*0.05+money*0.1;    
    }
    else if(money>750000 && money<=1000000)
    {
        money -= 750000;
        tax = 250000*0.05+250000*0.1+money*0.2;        
    }
    else
    {
        money -= 1000000;
        tax = 250000*0.05+250000*0.1+250000*0.2+money*0.3;
    }
    printf("Your Tax is-%.2f\n",tax);
}
