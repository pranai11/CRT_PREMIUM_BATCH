#include <stdio.h>

void main() {

    //greatest of three numbers
    int num1,num2,num3;
    printf("enter three numbers:");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    int result= (num1>num2) && (num1>num3) ? num1 : (num2>num1) && (num2>num3) ? num2: num3;
    printf("Greatest number is %d\n",result);

    //even or odd
    int num4;
    printf("\nEnter a number:");
    scanf("%d",&num4);
    (num4 % 2 == 0) ? printf("Even") : printf("Odd");
}
    