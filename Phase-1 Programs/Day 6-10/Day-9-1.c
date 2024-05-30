#include <stdio.h>
void main() {
    //Retrieve the position of specified element in an array
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    
    int a[size];
    printf("Enter Element values:\n");
    for(int i=0;i<size;i++)
    {
        printf("Element-%d:",i+1);
        scanf("%d",&a[i]);    
    }
    printf("Enter element to be searched:");
    int value,flag=0;
    scanf("%d",&value);
    for(int i =0;i<size;i++)
    {
        if(a[i]==value)
        {
            printf("Element %d is found at position %d.",value,i+1);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element is not found.");
    }
}
/*
Enter size of array:4
Enter Element values:
Element-1:25
Element-2:36
Element-3:41
Element-4:55
Enter element to be searched:10
Element is not found
Enter element to be searched:36
Element 36 is found at position 2.
*/

//Removing duplicate elements and printing remaining elements
#include <stdio.h>
void main() {
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    
    int a[size];
    printf("Enter Element values:\n");
    for(int i=0;i<size;i++)
    {
        printf("Element-%d:",i+1);
        scanf("%d",&a[i]);    
    }
    printf("Array after removing duplicate elements are...\n");
    for(int i =0;i<size;i++)
    {
        int dup=0;
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                dup=1;
                continue;
            }
        }
        if(dup==0)
        {
            printf("%d\n",a[i]);
        }
    }
}
/*
Enter size of array:4
Enter Element values:
Element-1:23
Element-2:45
Element-3:63
Element-4:23
Array after removing duplicate elements are...
45
63
23
*/