// Sum of elements of individual rows
#include <stdio.h>
int main() {
    int row,column;
    printf("Enter size of row of A:");
    scanf("%d",&row);
    printf("Enter size of column of A:");
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
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<column;j++)
        {
            sum+=a[i][j];
        }
        printf("Sum of elements of row-%d is %d.\n",i+1,sum);
    }
    return 0;
}
/*
Enter size of row of A:3
Enter size of column of A:3
a[0][0]-1
a[0][1]-2
a[0][2]-3
a[1][0]-4
a[1][1]-5
a[1][2]-6
a[2][0]-7
a[2][1]-8
a[2][2]-9
Sum of elements of row-1 is 6.
Sum of elements of row-2 is 15.
Sum of elements of row-3 is 24.
*/

// Sum of elements of individual columns
#include <stdio.h>
int main() {
    int row,column;
    printf("Enter size of row of A:");
    scanf("%d",&row);
    printf("Enter size of column of A:");
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
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<column;j++)
        {
            sum+=a[j][i];
        }
        printf("Sum of elements of column-%d is %d.\n",i+1,sum);
    }
    return 0;
}
/*
Enter size of row of A:3
Enter size of column of A:3
a[0][0]-1
a[0][1]-2
a[0][2]-3
a[1][0]-4
a[1][1]-5
a[1][2]-6
a[2][0]-7
a[2][1]-8
a[2][2]-9
Sum of elements of column-1 is 12.
Sum of elements of column-2 is 15.
Sum of elements of column-3 is 18.
*/