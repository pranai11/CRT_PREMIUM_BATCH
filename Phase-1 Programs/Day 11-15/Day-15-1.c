// Reverse of a given number using pointers and functions
#include <stdio.h>
int reverse(int *ptr){
    int rev=0,rem;
    while(*ptr!=0){
        rem=*ptr%10;
        rev=rev*10+rem;
        *ptr/=10;
    }
    return rev;
}
int main() {
    int num;
    scanf("%d",&num);
    printf("Reverse number is..%d",reverse(&num));
    return 0;
}
//123
//Reverse number is..321

//Reverse of a number using function pointer
#include <stdio.h>
int sum(int num){
    int rev=0,rem;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return rev;
}
int main() {
    int (*fp)(int);
    fp=&sum;
    int num;
    scanf("%d",&num);
    int s=fp(num);
    printf("Reverse is %d",s);
    return 0;
}
//123
//Reverse is 321

//Sum of a numbers using function pointer
#include <stdio.h>
int sum(int x,int y){
    return x+y;
}
int main() {
    int (*fp)(int,int);
    fp=&sum;
    int s=fp(10,15);
    printf("Sum is %d",s);
    return 0;
}
//Sum is 25