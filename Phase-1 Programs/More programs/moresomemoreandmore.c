//Finding second largest number in given array
#include<stdio.h>
void main(){
    int n,i,l,sl;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The elements of array are:");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    l=a[0],sl=a[1];
    for(i=0;i<n;i++){
        if(a[i] > l){
            sl = l;
            l = a[i];
        }
        else if(a[i]> sl && a[i] != l){
            sl=a[i];
        }
    } 
    printf("\nSecond Largest is %d \n",sl); 
    printf("Largest is %d \n",l);
}
/*
Enter the size of array: 5 
Enter the elements of array: 12 6 3 5 2
The elements of array are:12 6 3 5 2 
Second Largest is 6 
Largest is 12
*/

/*
#Derive second smallest number from the digits of given number
num=input("Enter a number:")
lis=[]
for i in num:
    lis.append(int(i))
lis.sort()
k=len(lis)
a=lis[k-1]
b=lis[k-2]
lis [k-1]=b
lis[k-2]=a
ans=0
for i in lis:
    ans+=i*10**(k-1)
    k-=1
print("Second smallest number is {}".format(ans))

Output:
Enter a number:264153
Second smallest number is 123465
*/