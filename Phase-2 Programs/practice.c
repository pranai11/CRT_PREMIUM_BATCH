//Reverse of a number using pointers
#include<stdio.h>
int reverse(int *ptr);
void main(){
    int num;
    scanf("%d",&num);
    printf("%d",reverse(&num));
}
int reverse(int *ptr){
    int rev=0,rem;
    while(*ptr!=0){
        rem=*ptr%10;
        rev=rev*10+rem;
        *ptr/=10;
    }
    return rev;
}