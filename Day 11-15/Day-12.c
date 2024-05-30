// Strong number or not using functions
#include <stdio.h>
int stn(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(stn(num)==num)
        printf("is strong number.");
    else
        printf("is not a strong number.");
}
int stn(int num){
    int digit,f,sum=0;
    while(num!=0)
    {
        digit=num%10;
        f=1;
        for(int i=1;i<=digit;i++)
            f=f*i;
        sum += f;
        num /= 10;
    }
    return sum;
}
//Enter a number:145
//is strong number.

//Finding largest digit in a number
#include <stdio.h>
int stn(int num);
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Largest digit is %d",stn(num));
}
int stn(int num){
    int large=0;
    while(num!=0)
    {
        int digit=num%10;
        if(digit>large)
            large=digit;
        num/=10;
    }
    return large;
}
//Enter a number:14889
//Largest digit is 9