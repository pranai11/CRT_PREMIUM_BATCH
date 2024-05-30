#include<stdio.h>
void main()
{
    //Converting lowercase to uppercase and uppercase to lowercase
    char a;
    scanf("%d",&a);
    if(a<=90)
    {
        printf("%c",a+32);
    }
    else{
        printf("%c",a-32);
    }

    /*output
    i/p-a
    o/p-A

    i/p-D
    o/p-d
    */

    //Character type identifier
    char ip;
    printf("Enter any charcter:");                                             //output
    scanf("%c",&ip);                                                           //ip-A
    if((ip>=65 && ip<=90) || (ip>=97 && ip<=122))                              //op-alphabet
        printf("your entered character-%c is an alphabet",ip);                 //ip-&
    else if(ip>=48 && ip<=57)                                                  //op-special character
        printf("your entered character-%c is a number",ip);                    //ip-8
    else                                                                       //op-number
        printf("your entered character-%c is a special character",ip);
}