// leap year
#include<stdio.h>
void main(){
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0)||(year%400==0))
        printf("Leap year");
    else
        printf("Not a leap year");
}

//Character pattern
#include<stdio.h>
void main(){
    int num,chare=65;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++)
            printf("%c ",chare++);
        printf("\n");
    }
}
/*
5
A 
B C 
D E F 
G H I J 
K L M N O
*/

//Reverse of an array
#include<stdio.h>
void main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Reverse is..");
    for(int i=size-1;i>=0;i--)
        printf("%d",arr[i]);
}

//Rotate array by given value
#include<stdio.h>
void main(){
    int size,r;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter rotation:");
    scanf("%d",&r);
    int arr[size];
    int farr[size];
    printf("Enter array elements:");
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    int k=r,s=size;
    for(int i=0;i<size;i++){
        if(i<r){
        farr[size-k]=arr[i];
        k--;}
        else{farr[size-(s--)]=arr[i];}
    }
    for(int i=0;i<size;i++)
        printf("%d ",farr[i]);
}
/*
Enter size of array:5
Enter rotation:3
Enter array elements:1 5 4 3 2
3 2 1 5 4 
*/