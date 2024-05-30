//String declaration
#include<stdio.h>
#include<string.h>
void main(){
    char ch[6]={'h','e','l','l','o','\0'};
    char st[]="Hello all";
    printf("Char array: %s\nString Literal: %s",ch,st);
}

//Traversing strings
//Method-1:Using length of the string
//Counting no of vowels and consonents in a string
#include<stdio.h>
#include<string.h>
void main(){
    char s[5]="Oreos";//Need to specify length to traverse using length
    int i=0,vc=0,cc=0;
    while(i<5){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vc++;
        else
            cc++;
        i++;
    }
    printf("No of vowels:%d\n",vc);
    printf("No of consonents:%d",cc);
}
//No of vowels:3
//No of consonents:2

//Method-2:Using Null character
#include<stdio.h>
#include<string.h>
void main(){
    char s[]="Oreos";//No need to specify length in case of traversing using null
    int i=0,vc=0,cc=0;
    while(s[i]!=NULL){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            vc++;
        else
            cc++;
        i++;
    }
    printf("No of vowels:%d\n",vc);
    printf("No of consonents:%d",cc);
}
//No of vowels:3
//No of consonents:2

//Dynamic string allocation
#include<stdio.h>
#include<string.h>
void main(){
    char s[20];
    printf("Enter a string:");
    scanf("%s",s);//no need of & here in case of string
    printf("You entered %s",s);//it will terminate when it encountered space soo rest will be left alone
    //to overcome this we can give explicit instructions to compiler in the below way
    scanf("%[^\n]s",s);//It will read until it encounter nextline character//Not an error it is correct
}

//pointers with strings
#include<stdio.h>
#include<string.h>
void main(){
    char s[11]="Javapoint";
    char *p=s;
    printf("%s",p);
}
//Javapoint

#include<stdio.h>
#include<string.h>
void main(){
    char *p="Hello everyone";
    printf("String p:%s\n",p);
    char *q;
    printf("Copying the content of p to q..\n");
    q=p;
    printf("String q:%s\n",q);
}

//gets and puts and fgets
#include<stdio.h>
#include<string.h>
void main(){
    char s[20],h[20];
    printf("Enter a string1:");
    gets(s);
    printf("Enter a string2:");
    fgets(h,5,stdin);//can give bounds to the input text
    printf("value of string1:");
    puts(s);//To print
    printf("value of string2:");
    puts(h);
}
//With pointers
#include <stdio.h>
int main() {
    char a[11];
    char *b=a;
    fgets(b,5,stdin);
    puts(b);
    return 0;
}