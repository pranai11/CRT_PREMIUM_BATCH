//Arrays Declaration,initialization and address printing,reverse order.
#include <stdio.h>
void main() {
    int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("Array element addresses:");
    for(int i=0;i<n;i++){
        printf("%u ",&a[i]);
    }
    printf("Array elements in reverse order are:\n");
    for(int i=n-1;i>=0;i--){
        printf("a[%d]: %d",i,a[i]);
        printf("\n");
    } }
/* Enter size of array:4
Enter array elements:
Enter a[0]:3
Enter a[1]:6
Enter a[2]:4
Enter a[3]:9
Array element addresses:1996644672 1996644676 1996644680 1996644684
Array elements in reverse order are:
a[3]: 9
a[2]: 4
a[1]: 6
a[0]: 3 */


//Finding the percentage of a student using arrays
#include <stdio.h>
void main() {
    int n,i;
    float sum=0;
    printf("Enter no of subjects:");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter subject marks:\n");
    for(int i=0;i<n;i++)
    {
        printf("subject-%d:",i+1);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Percentage: %.2f",sum/n);
}

/*
Enter no of subjects:4
Enter subject marks:
subject-1:99
subject-2:88
subject-3:77
subject-4:89
Percentage: 88.25
*/


// Finding Largest,smallest elements and their sum in an array
#include <stdio.h>
void main() {
    int n,i,small,large;float sum=0;
    printf("Enter no of numbers:");
    scanf("%d",&n);
    int a[n];
    printf("Enter numbers:\n");
    for(int i=0;i<n;i++)
    {
        printf("Number-%d:",i+1);
        scanf("%d",&a[i]);
    }
    small=large=a[0];
    for(int i=0;i<n;i++)
    {
        if(small>a[i])
            small=a[i];
        if(large<a[i])
            large=a[i];
    }
    printf("Smallest is:%d\n",small);
    printf("Largest is:%d\n",large);
    printf("Sum is %d\n",small+large);
}
/* Enter no of numbers:4
Enter numbers:
Number-1:23
Number-2:54
Number-3:66
Number-4:12
Smallest is:12
Largest is:66
Sum is 78 */


//Second largest and second smallest**Need to be done**
#include <stdio.h>
void main() {
    int n,i;
    float sum=0;
    printf("Enter no of numbers:");
    scanf("%d",&n);
    
    int secsmall,seclarge;
    int small,large;
    int a[n];
    printf("Enter numbers:\n");
    for(int i=0;i<n;i++)
    {
        printf("Number-%d:",i+1);
        scanf("%d",&a[i]);
    }
    small=a[0];
    large=seclarge=a[0];
    for(int i=0;i<n;i++)
    {
        if(small>a[i])
            {
                small=a[i];
                secsmall=small;
            }
        if(large<a[i])
        {
            seclarge=large;
            large=a[i];
        }
        else if(seclarge>=a[i])
        {
            seclarge=a[i];
        }
    }
    
    printf("Smallest is:%d\n",secsmall);
    printf("Largest is:%d\n",seclarge);
    printf("Sum is %d\n",secsmall+seclarge);
}