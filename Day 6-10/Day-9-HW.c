//Addition of two matrices
#include <stdio.h>
void main() {
    int arow,acolumn;
    printf("Enter size of row of A:");
    scanf("%d",&arow);
    printf("Enter size of column of A:");
    scanf("%d",&acolumn);
    
    int a[arow][acolumn];
    for(int i=0;i<arow;i++)
    {
       for(int j = 0;j<acolumn;j++)
        {
            printf("a[%d][%d]-",i,j);
            scanf("%d",&a[i][j]);    
        }
    }
    printf("A-Matrix elements are...\n");
    for(int i=0;i<arow;i++)
    {
       for(int j = 0;j<acolumn;j++)
        {
            printf("%d ",a[i][j]);    
        }
        printf("\n");
    }
    int brow,bcolumn;
    printf("Enter size of row B:");
    scanf("%d",&brow);
    printf("Enter size of column of B:");
    scanf("%d",&bcolumn);
    
    int b[brow][bcolumn];
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            printf("b[%d][%d]-",i,j);
            scanf("%d",&b[i][j]);    
        }
    }
    printf("B-Matrix elements are...\n");
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            printf("%d ",b[i][j]);    
        }
        printf("\n");
    }
    int c[brow][bcolumn];
    printf("Sum of two matrices are:\n");
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            c[i][j]=a[i][j]+b[i][j];   
        }
    }
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            printf("%d ",c[i][j]);    
        }
        printf("\n");
    }
}

/*
Enter size of row of A:2
Enter size of column of A:2
a[0][0]-1
a[0][1]-2
a[1][0]-3
a[1][1]-4
A-Matrix elements are...
1 2 
3 4 
Enter size of row B:2
Enter size of column of B:2
b[0][0]-1
b[0][1]-2
b[1][0]-3
b[1][1]-4
B-Matrix elements are...
1 2 
3 4 
Sum of two matrices are:
2 4 
6 8
*/


//Product of two matrices
#include <stdio.h>
void main() {
    int arow,acolumn;
    printf("Enter size of row of A:");
    scanf("%d",&arow);
    printf("Enter size of column of A:");
    scanf("%d",&acolumn);
    
    int a[arow][acolumn];
    for(int i=0;i<arow;i++)
    {
       for(int j = 0;j<acolumn;j++)
        {
            printf("a[%d][%d]-",i,j);
            scanf("%d",&a[i][j]);    
        }
    }
    printf("A-Matrix elements are...\n");
    for(int i=0;i<arow;i++)
    {
       for(int j = 0;j<acolumn;j++)
        {
            printf("%d ",a[i][j]);    
        }
        printf("\n");
    }
    int brow,bcolumn;
    printf("Enter size of row B:");
    scanf("%d",&brow);
    printf("Enter size of column of B:");
    scanf("%d",&bcolumn);
    
    int b[brow][bcolumn];
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            printf("b[%d][%d]-",i,j);
            scanf("%d",&b[i][j]);    
        }
    }
    printf("B-Matrix elements are...\n");
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            printf("%d ",b[i][j]);    
        }
        printf("\n");
    }
    int c[brow][bcolumn];

    printf("Product of two matrices are:\n");
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            int prod=0;
            for(int k=0;k<brow;k++)
            {
            prod+=a[i][k]*b[k][j];   
            }
            c[i][j]=prod;
        }
    }
    for(int i=0;i<brow;i++)
    {
       for(int j = 0;j<bcolumn;j++)
        {
            printf("%d ",c[i][j]);    
        }
        printf("\n");
    }
}

/*
Enter size of row of A:3
Enter size of column of A:3
a[0][0]-2
a[0][1]-3
a[0][2]-4
a[1][0]-3
a[1][1]-5
a[1][2]-6
a[2][0]-4
a[2][1]-5
a[2][2]-3
A-Matrix elements are...
2 3 4 
3 5 6 
4 5 3 
Enter size of row B:3
Enter size of column of B:3
b[0][0]-1
b[0][1]-2
b[0][2]-1
b[1][0]--1
b[1][1]-2
b[1][2]-1
b[2][0]-3
b[2][1]-2
b[2][2]-1
B-Matrix elements are...
1 2 1 
-1 2 1 
3 2 1 
Product of two matrices are:
11 18 9 
16 28 14 
8 24 12 
*/