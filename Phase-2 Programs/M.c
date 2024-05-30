/*Problem statement:
Sushi has 3 numbers A,B and C.
Sushi wonders if it is possible to choose exactly two numbers out of the three numbers such that theit sum is odd.
Input Format:
• The first line of input will contain a single integer T
• T, denoting the number of test cases.
• Each test case consists of three integers A,B,C
Output Format:
YES if possible
NO if not possible

written in python
*/
s=int(input())
n=y=0
for i in range(s):
    lis-list(map(int,input().split('')))
    c=[]
    for j in range(len(lis)):
        if (sum(lis)-lis[j])%2!=0:
            c.append(1)
        else:
            c.append(0)
    if 1 in c:
        print("YES")
    else:
        print("NO")
/*
Problem statement:
In Island, denominations less than rupees 10 have stopped and now rupees 10 is the smallest denomination.
Suppose sushi goes to buy some item with cost not a multiple of, then, he will be charged the cost that is the nearest multiple of 10. If the cost is equally distant from two nearest multiples of 10, then the cost is rounded up For example, 35,38,40,44, 35,38,40,44 are all rounded to 40.
Suppose sushi purchased an item of price x(x<100).How much will be given as change if sushi gave 100 to the seller
*/
t=int(input())
lis=[]
for i in range(t):
    lis.append(int(input()))
for i in lis:
    if i%10>=5:
        print(100-(i+(10-i%10)))
    else:
        print(100-(i-(i%10)))

//print the desired nth prime numer
//ex: ip=5 
//    op=11
#include<stdio.h>
void main(){
    int num=0;
    int a;
    scanf("%d",&a);
    for(int i=2;i<1000;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                count++;
        }
        if(count==2){
            num++;}
        if(num==a){
            printf("%d",i);
            break;}
    }
}

//Store a value at a variable indirectly using pointer
#include<stdio.h>
void main(){
    int *ptr,x;
    ptr=&x;
    printf("%u\n%u\n",&x,ptr);
    *ptr=10;//indirect assignment of 10 to variable x.
    printf("x=%d",x);
}


//Malloc and Reaalloc Example
#include <stdio.h>
#include <stdlib.h>
int main()
{
	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int m,n, i;
	// Get the number of elements for the array
	scanf("%d",&m);
	// Dynamically allocate memory using calloc()
	ptr = (int*)calloc(m, sizeof(int));
	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {
		// Get the elements of the array
		for (i = 0; i < m; ++i) {
			scanf("%d",ptr+i);
		}
		// Print the elements of the array
		printf("Initial array: ");
		for (i = 0; i < m; ++i) {
			printf("%d ", ptr[i]);
		}
        printf("\n");
		// Get the new size for the array
		scanf("%d",&n);
		// Dynamically re-allocate memory using realloc()
		ptr = (int*)realloc(ptr, (n+m) * sizeof(int));
		// Get the new elements of the array
		for (i = m; i < (n+m); ++i) {
			scanf("%d",(ptr+i));
		}
        printf("Total elements processed: %d\n",m);
		// Print the elements of the array
		printf("Reallocated Array: ");
		for (i = 0; i < (n+m); ++i) {
			printf("%d ", ptr[i]);
		}
        printf("\nTotal elements processed: %d\n",m+n);
		free(ptr);
	}
	return 0;
}