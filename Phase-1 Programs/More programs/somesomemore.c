//Find no of Two Wheelers and Four Wheelers from given no of vehicles and tyres
#include<stdio.h>
void main(){
    int v,t;
    printf("Enter no of vehicles and tyres:");
    scanf("%d%d",&v,&t);
    int two,four;
    four=(t-2*v)/2;
    two=v-four;
    if(four*4+two*2==t)
        printf("TW = %d FW = %d",two,four);
    else
        printf("Invalid Input");
}
/*
Enter no of vehicles and tyres:200 534
TW = 133 FW = 67

Enter no of vehicles and tyres:10 29
Invalid Input
*/

//Sum of first n natural numbers using recursion
#include <stdio.h>
int sumn(int n){
    if(n==1)
        return 1;
    else
        return n+sumn(n-1);
}
int main() {
    int n;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("Sum is...%d",sumn(n));
    return 0;
}
//Enter n value:10
//Sum is...55

//Swap two numbers using arithmetic operations
#include <stdio.h>
int main() {
    int a,b;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d.\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d and b=%d.",a,b);
    return 0;
}
/*Enter a and b values:10 20
Before swapping a=10 and b=20.
After swapping a=20 and b=10.
*/
//Swap two numbers using bitwise operators
#include<stdio.h>
int main(){
   int a,b;
   printf("Enter a and b values:");
   scanf("%d%d",&a,&b);
   printf("Before swapping a=%d and b=%d.\n",a,b);
   a= a^b;
   b= a^b;
   a= a^b;
   printf("After swapping a=%d and b=%d.\n",a,b);
   return 0;
}
/*
Enter a and b values:24 56
Before swapping a=24 and b=56.
After swapping a=56 and b=24.
*/

//Sum of digits of a number using recursion
#include <stdio.h>
int sumd(int num){
    if(num==0)
        return 0;
    else
        return num%10+sumd(num/10);
}
int main() {
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Sum of digits is...%d.",sumd(num));
    return 0;
}
//Enter a number:101
//Sum of digits is...2.

//Find roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
float a,b,c;
float D,root1, root2;
printf("Enter coefficient values(a,b,c):");
scanf("%f %f %f",&a,&b,&c);
D = b*b-4*a*c;
if (D>0){
    root1=(-b+sqrt(D))/(2*a);
    root2=(-b-sqrt(D))/(2*a);
    printf("Root1-%.2f Root2-%.2f", root1, root2);
}
else if(D==0){
    root1 = root2 = -b/(2*a);
    printf("Root1 & Root2-%.2f\n", root1);
}
else{
    float r = -b/(2*a);
    float im = sqrt(-D)/(2*a);
    printf("Root1-%.2f+%.2fi Root2-%.2f-%.2fi\n",r,im,r,im);
}
return 0;
}
//Enter coefficient values(a,b,c):4 -2 -12
//Root1-2.00 Root2--1.50

//Find the type of triangle from given sides
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter length of three sides...");
scanf("%d %d %d",&a,&b,&c);
if (a==b && b==c)
    printf("Triangle is equilateral.\n");
else if(a!=b && b!=c && a!=c)
    printf("Triangle is scalene.\n");
else
    printf("Triangle is isosceles.\n");
return 0;
}
//Enter length of three sides...12 15 12
//Triangle is isosceles.


//Find the index of most significant bit of given number
#include <stdio.h>
void main()
{
int num;
printf("Enter a value:");
scanf("%d",&num);
int msb=0;
while(num>0)
{
msb+=1;
num=num/2;
}
printf("Index of Most significant bit is %d",msb-1);
}
//Enter a value:15
//Index of Most significant bit is 3

1.

         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
------------------------------------------------

// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" *");
        }
      
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" *");
        }
      
        printf("\n");
    }
}

2)
        1 
      2 2 2 
    3 3 3 3 3 
  4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5 
  4 4 4 4 4 4 4 
    3 3 3 3 3 
      2 2 2 
        1 
----------------------------------------------------------

// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf("%d ",i);
        }
      
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf("%d ",i);
        }
      
        printf("\n");
    }
}

3)

 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
-----------------------------------------



// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" *");
        }
      
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" *");
        }
      
        printf("\n");
    }

    }


4)

 5 5 5 5 5 5 5 5 5
   4 4 4 4 4 4 4
     3 3 3 3 3
       2 2 2
          1
       2 2 2
     3 3 3 3 3
   4 4 4 4 4 4 4
 5 5 5 5 5 5 5 5 5
------------------------------------------



// Online C compiler to run C program online
#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" %d",i);
        }
      
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" %d",i);
        }
      
        printf("\n");
    }

    }
