#include<stdio.h>
void main()
{
    //Strong number
    int num,digit,f,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp=num;
    while(num!=0)
    {
        digit=num%10;
        f=1;
        for(int i=1;i<=digit;i++)
            f=f*i;
        sum += f;
        num /= 10;
    }
    if(sum==temp)
        printf("%d is strong number.",temp);
    else
        printf("%d is not a strong number.",temp);

    
    //perform sum on two no.s until u stop
    int a,b;
    char op;
    do
    {
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum:%d\n",a+b);
    printf("Do you want to continue(y/s):");
    scanf(" %c",&op);//there should be space to tell compiler that it is not the end
    } while (op=='y');
}