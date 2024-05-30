// Function without prototype declaration
#include <stdio.h>
void student() //called function
{
    printf("Name: John");
    printf("Roll number: 123");
    printf("Marks:100");
}
void main() {
    student(); //Calling function
}

// Function with prototype declaration
#include <stdio.h>
void student();//prototype declaration
void main() {
    student(); //Calling function
}
void student() //called function
{
    printf("Name: John");
    printf("Roll number: 123");
    printf("Marks:100");
}

// Average of three numbers using function
#include <stdio.h>
void average(float a,float b,float c); //prototype
void main() {
    float a,b,c;
    printf("Enter a,b,c values:");
    scanf("%f%f%f",&a,&b,&c);
    average(a,b,c); //Calling function //Actual Parameters
}
void average(float a,float b,float c) //called function //Formal Parameters
{
    float avg;
    avg = (a+b+c)/3;
    printf("Average is:%.2f.",avg);
}
//Average is:3.07.

// Types of functions
// Without parameters without return value
#include <stdio.h>
void func1();
void main() {
    func1();
}
void func1()
{
    int a=10,b=20;
    printf("a=%d b=%d",a,b);
}

// With parameters without return value
#include <stdio.h>
void func2(int x, int y);
void main() {
    int a=10,b=20;
    func2(a,b);
}
void func2(int x, int y)
{
    printf("a=%d b=%d",x,y);
}


// With parameters with return value
#include <stdio.h>
int func3(int x, int y);
void main() {
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);
    int z = func3(a,b);
    printf("a+b=%d",z);
}
int func3(int x, int y)
{
    return x+y;
}


// Without parameters with return value
#include <stdio.h>
int func4();
void main() {
    int z = func4();
    printf("a+b=%d",z);
}
int func4()
{
    int a=10,b=20;
    printf("a=%d b=%d\n",a,b);
    return a+b;
}