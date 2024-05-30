//Dynamic Memory Allocation Example
#include <stdio.h>
#include <stdlib.h>

void main()
{
	// This pointer will hold the base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n*sizeof(int));
    for (i = 0; i < n; ++i) {
			scanf("%d",&ptr[i]);
		}
	// Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; ++i) {
        printf("%d\n", ptr[i]);
    }

	printf("Reallocating\n");
	printf("Enter resize of structure:");
	scanf("%d",&n);
	ptr = realloc(ptr,n);
    for (i = 0; i < n; ++i) {
			scanf("%d",&ptr[i]);
		}
	// Print the elements of the array
    printf("The elements of the array are:\n");
    for (i = 0; i < n; ++i) {
        printf("%d\n", ptr[i]);
    }
	free(ptr);
}

//malloc and calloc usage
#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr=(int *)malloc(n*sizeof(int)); //or (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i)); //as it is a pointer as it contains address value.There is no need to specify &(ambercent)
		printf("%u\n",*(ptr+i));//As it is a pointer we need to de reference it using *(asterisk)
    }
    return 0;
}

//realloc usage
#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    int *ptr;
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
        printf("%u\n",*(ptr+i));
    }
    int m;
    printf("Enter resize value:");
    scanf("%d",&m);
    ptr=realloc(ptr,m);
    for(int i=0;i<m;i++){
        scanf("%d",(ptr+i));
        printf("%u\n",*(ptr+i));
    }
    return 0;
}

//Store 5 odd numbers using calloc and resize it to store 6 even numbers
//malloc usage
#include <stdio.h>
#include<stdlib.h>
int main() {
    int i;
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<5;i++){
        printf("%u\n",*(ptr+i));
    }
    ptr=realloc(ptr,6);
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;
    for(int i=0;i<6;i++){
        printf("%u\n",*(ptr+i));
    }
	free(ptr);
    return 0;
}