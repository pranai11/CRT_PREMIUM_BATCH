//Fibonacci series using recursion
#include <stdio.h>
int Fibonacci(int n){
    if(n<=1)
        return n;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}
int main() {
    int num,i;
    printf("Enter no of terms:");
    scanf("%d",&num);
    printf("Fibonacci series:");
    for(i=0;i<num;i++)
        printf("%d ",Fibonacci(i));
    return 0;
}
//Enter no of terms:5
//Fibonacci series:0 1 1 2 3 

//Finding GCD using recursion
#include <stdio.h>
int gcd(int a, int b){
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
int main() {
    int num1,num2,i;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    printf("GCD is %d",gcd(num1,num2));
    return 0;
}
//Enter two numbers:24 32
//GCD is 8

// GCD of two numbers without recursion
#include <stdio.h>
int main() {
    int n1,n2,gcd=1;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    for(int i=1;i<n1*n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    printf("GCD is %d",gcd);
    return 0;
}
//Enter two numbers:24 32
//GCD is 8

// Pointers
#include <stdio.h>
int main() {
    int a=10;
    int *ptr;
    ptr=&a;
    printf("%d\n",a);//Value of a
    printf("%d\n",&a);//Address of a
    printf("%d\n",ptr);//address of a i.e.,value of pointer
    printf("%d\n",*ptr);//value present in address of a i.e,value of a
    printf("%d\n",*(&a));//" "
    printf("%d\n",&ptr);//address of pointer
    return 0;
}

// Addition of two numbers using Pointers
#include <stdio.h>
int main() {
    int a=10,b=20;
    int *p1=&a,*p2=&b;
    int c=*p1+*p2;
    printf("%d",c);
    return 0;
}

// Addition of two numbers using functions and pointers
#include <stdio.h>
int add(int *p,int *q){
    return *p+*q;
}
int main() {
    int a=10,b=20;
    printf("%d",add(&a,&b));
    return 0;
}