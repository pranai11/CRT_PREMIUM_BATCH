#include<stdio.h>
void main()
{
    //ATM Withdraw
    int amount,five,two,one;
    printf("Enter amount to withdraw");
    scanf("%d",&amount);

    if(amount%100==0)
    {
    five = amount/500;
    amount=amount%500;
    two=amount/200;
    amount=amount%200;
    one=amount/100;
        
        if (five>0)
        {
            printf("500 Notes-%d\n",five);
        }
        if(two>0)
        {
            printf("200 Notes-%d\n",two);
        }
        if(one>0)
        {
            printf("100 Notes-%d\n",one);
        }
    }
    else
    {
        printf("Enter only multiples of 100");
    }
}
