//Transpose of a Matrix
#include <stdio.h>
void main() {
    int row,column;
    printf("Enter size of row:");
    scanf("%d",&row);
    printf("Enter size of column:");
    scanf("%d",&column);
    
    int a[row][column];
    for(int i=0;i<row;i++)
    {
       for(int j = 0;j<column;j++)
        {
            printf("a[%d][%d]-",i,j);
            scanf("%d",&a[i][j]);    
        }
    }
    printf("Array elements are..\n");
    for(int i=0;i<row;i++)
    {
       for(int j = 0;j<column;j++)
        {
            printf("%d ",a[i][j]);    
        }
        printf("\n");
    }
    printf("Transpose matrix is...\n");
    for(int i=0;i<row;i++)
    {
       for(int j = 0;j<column;j++)
        {
            printf("%d ",a[j][i]);    
        }
        printf("\n");
    }
}
/*
Enter size of row:3
Enter size of column:3
a[0][0]-1
a[0][1]-2
a[0][2]-3
a[1][0]-4
a[1][1]-5
a[1][2]-6
a[2][0]-7
a[2][1]-8
a[2][2]-9
Array elements are..
1 2 3 
4 5 6 
7 8 9 
Transpose matrix is...
1 4 7 
2 5 8 
3 6 9 
*/


//Trace of a matrix
#include <stdio.h>
void main() {
    int row,column;
    printf("Enter size of row:");
    scanf("%d",&row);
    printf("Enter size of column:");
    scanf("%d",&column);
    
    int trace=0;
    int a[row][column];
    for(int i=0;i<row;i++)
    {
       for(int j = 0;j<column;j++)
        {
            printf("a[%d][%d]-",i,j);
            scanf("%d",&a[i][j]);    
        }
    }
    
    printf("Trace of matrix is...");
    for(int i=0;i<row;i++)
    {
       for(int j = 0;j<column;j++)
        {
            if(i==j)
            {
                trace+=a[i][j];
            }
        }
    }
    printf("%d",trace);
}

/*
Enter size of row:3
Enter size of column:3
a[0][0]-1
a[0][1]-2
a[0][2]-3
a[1][0]-4
a[1][1]-5
a[1][2]-6
a[2][0]-7
a[2][1]-8
a[2][2]-9
Trace of matrix is...15
*/