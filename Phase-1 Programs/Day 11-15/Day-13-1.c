// Call by value implementation
#include <stdio.h>
void swap(int a,int b);
int main() {
    int a,b;
    printf("Enter a and b values:\n");
    scanf("%d%d",&a,&b); //10 20
    printf("Before in main:a=%d b=%d\n",a,b); //10 20
    swap(a,b);
    printf("After in main:a=%d b=%d\n",a,b); //10 20
    return 0;
}
void swap(int a,int b){
    int temp;
    printf("Before in swap:a=%d b=%d\n",a,b); //10 20
    temp=a;
    a=b;
    b=temp;
    printf("After in swap:a=%d b=%d\n",a,b); //20 10
}

// Call by reference implementation
#include <stdio.h>
void swap2(int *p,int *q);
int main() {
    int a,b;
    printf("Enter a and b values:\n"); 
    scanf("%d%d",&a,&b); //10 20 
    printf("Before in main:a=%d b=%d\n",a,b); //10 20
    swap2(&a,&b);
    printf("After in main:a=%d b=%d\n",a,b); //20 10
    return 0;
}
void swap2(int *p,int *q){
    int temp;
    printf("Before in swap:a=%d b=%d\n",*p,*q); //10 20
    temp=*p;
    *p=*q;
    *q=temp;
    printf("After in swap:a=%d b=%d\n",*p,*q); //20 10
}

//Global and Local variables
#include<stdio.h>
int a=8,b;
void main()
{
    int c=9,d;
    b = a+c;
    d = a-c;
    printf("a=%d c=%d\n",a,c); //a=8 c=9
    printf("b=%d d=%d\n",b,d); //b=17 d=-1
}

//Factorial using recursion
#include<stdio.h>
int factorial(int n){
    if(n==0||n==1)
        return 1;
    else
        return factorial(n-1)*n;
}
void main()
{
    int n,fact;
    printf("Enter a number:");
    scanf("%d",&n);
    fact=factorial(n);
    printf("Factorial is %d\n",fact); 
}
//Enter a number:4
//Factorial is 24