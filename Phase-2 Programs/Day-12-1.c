// Jump Search
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int i=0;
    int j=0;
    int k;
    int jmp=sqrt(n);
    printf("%d\n",jmp);
    printf("Enter element to be found:");
    scanf("%d",&k);
    while(j<=n){
        if(k==arr[j]){
            printf("Element found at index %d",j);
            break;
        }
        else if(k>arr[j]){
            j+=jmp;
        }
        else if(k<arr[j]){
            j--;
        }
    }
    if(j>n)
        printf("Elment not found");
    return 0;
}

// Bubble Sort
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int swap=0,temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap+=1;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("No of swaps done:%d\n",swap);
    printf("Sorted elements are...");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

//Selection sort
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int temp;
    for(int i=0;i<n;i++){
        int small=arr[i];
        int index=0,c=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]<small){
               small=arr[j];
               index=j;
               c+=1;
            }
        }
        if(c==0){
            continue;
        }
        else{
            temp=arr[i];
            arr[i]=small;
            arr[index]=temp;
        }
    }
    printf("Sorted elements are...");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}