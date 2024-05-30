#include<stdio.h>
void main()
{
    int a=5,b=6;
    printf("%d %d \n",a,b); //5 6
    printf("%u %u \n",&a,&b); //1000 996-address

    //Program-1: Swapping Two Numbers
    int n1 = 100, n2 = 200;
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("After Swapping: %d and %d",n1,n2);

    //Arithmetic Operators
    printf("%d \n",5+6); //11
    printf("%d \n",5-6); //-1
    printf("%d \n",5*6); //30
    printf("%d \n",5/6); //0
    printf("%d \n",5%6); //5

    // printf("%d \n",4%4.7); //error

    //Displaying individual digits of a number
    int h = 143;
    printf("%d \n",h%10); //3
    printf("%d \n",(h/10)%10); //4
    printf("%d \n",(h/100)%10); //1

    //Sum of first and last two digit number of a number
    int n3 = 12345;
    printf("%d \n",(n3/1000)+(n3%100)); //12+45=57

    //Avg of 3 no's
    printf("%f \n",(4+4+3)/3.0); //3.666667

    //Simple Interest
    printf("%f \n",(45265.0*3.5*4.5)/100.0);
}