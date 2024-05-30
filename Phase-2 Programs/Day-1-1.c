//Prime numbers from 1 to N
#include<stdio.h>
#include<stdbool.h>
bool isPrime(int n){
    if(n==1 || n==0)
        return false;
    for(int i=2;i<=n/2;i++){//In case of n==2 condition will be failed so it will return true
        /*
          Checking whether there are any factors below n/2
          If there are any then it is not a prime number.
          For Ex:let us check 10 is prime are or.
          From 2 to 5, 5 is a factor of 10.soo it is not a 
          prime soo returning false.
        */
        if(n%i==0)
            return false;
    }
    return true;//Returns true if there are no factors since it will be a prime
}
int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(isPrime(i))
            printf("%d\n",i);
    }
    return 0;
}