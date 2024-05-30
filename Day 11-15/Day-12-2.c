// Given matrix to upper triangular matrix
#include<stdio.h>
void upper_triangular(int a[][3],int r,int c);
void main()
{
    int r,c,i,j;
    printf("Enter order of matrix:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter your matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    upper_triangular(a,r,c);
}
void upper_triangular(int a[][3],int r,int c){
    int i,j;
    int sum=0;
    printf("Upper triangular matrix is..\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i>j){
                printf("%d ",0);
                sum+=a[i][j];}
            else{
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("Sum of elements present at upper triangular matrix is %d",sum);
}
/*
Enter order of matrix:3 3
Enter your matrix:
1 2 3 4 5 6 7 8 9
Upper triangular matrix is..
1 2 3 
0 5 6 
0 0 9 
Sum of elements present at upper triangular matrix is 19
*/


// Given matrix to lower triangular matrix
#include<stdio.h>
void lower_triangular(int a[][3],int r,int c);
void main()
{
    int r,c,i,j;
    printf("Enter order of matrix:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter your matrix:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    lower_triangular(a,r,c);
}
void lower_triangular(int a[][3],int r,int c){
    int i,j;
    int sum=0;
    printf("Lower triangular matrix is..\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i<j){
                printf("%d ",0);
                sum+=a[i][j];}
            else{
                printf("%d ",a[i][j]);
            }
        }
    printf("\n");
    }
    printf("Sum of elements present at lower triangular matrix is %d",sum);
}
/*
Enter order of matrix:3 3
Enter your matrix:
1 2 3 4 5 6 7 8 9
Lower triangular matrix is..
1 0 0 
4 5 0 
7 8 9 
Sum of elements present at lower triangular matrix is 11
*/

//Check if given matrix is sparse matrix or not
#include <stdio.h>
void sparse(int a[][3],int r,int c);
int main() {
    int r,c,i,j;
    printf("Enter order of matrix:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    printf("Enter your elements:");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    sparse(a,r,c);
    return 0;
}
void sparse(int a[][3],int r,int c){
    int i,j,count=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==0){
                count++;
            }
        }
    }
    if(count>(r+c)/2)
            printf("Sparse Matrix.");
        else
            printf("Not a sparse matrix.");
}
/*Enter order of matrix:3 3
Enter your elements:1 2 3 0 0 0 5 0 0 
Sparse Matrix.*/

//finding the index of specified element in an array
#include <stdio.h>
int linear(int a[],int size);
int main() {
    int n,i,index;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter your elements:");
    for(i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
    index=linear(a,n);
    if(index>=0)
        printf("Element is found at inex:%d.",index);
    else
        printf("Element is not found.");
    return 0;
}
int linear(int a[],int size){
    int num,i;
    printf("Enter element to be searched:");
    scanf("%d",&num);
    for(i=0;i<size;i++){
            if(num==a[i]){
                return i;
            }
        }
    return -1;
}
/*
Enter size of array:3
Enter your elements:22 66 88
Enter element to be searched:12
Element is not found.
*/