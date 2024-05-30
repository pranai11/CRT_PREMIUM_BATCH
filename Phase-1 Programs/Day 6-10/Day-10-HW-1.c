//Sum of border elements of a matrix
#include <stdio.h>
int main() {
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
    
    int sum=0;
    for(int i=0;i<arow;i++)
    {
        for(int j=0;j<acolumn;j++)
        {
            if(i==0 || i==arow-1)
                sum+=a[i][j];
            if(j==0 || j==acolumn-1)
                sum+=a[i][j];
        }
    }
    sum-=a[0][0]+a[arow-1][0]+a[arow-1][acolumn-1]+a[0][arow-1];
    printf("Sum of Border elements are %d",sum);
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
Sum of Border elements are 40
*/

//Finding Sum of even digits in a matrix
#include <stdio.h>
int main() {
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
    int sum=0;
    for(int i=0;i<arow;i++)
    {
       for(int j = 0;j<acolumn;j++)
        {
            if(a[i][j]%2==0)
                sum+=a[i][j];
        }
    }
    printf("Sum of even digits in a matrix is %d",sum);
    return 0;
}
/*
Enter size of row of A:3
Enter size of column of A:3
a[0][0]-1
a[0][1]-2
a[0][2]-3
a[1][0]-4
a[1][1]--2
a[1][2]-6
a[2][0]-9
a[2][1]-7
a[2][2]-8
Sum of even digits in a matrix is 18
*/

//Finding Largest element in matrix
#include <stdio.h>
int main() {
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
    int large=a[0][0];
    for(int i=0;i<arow;i++)
    {
       for(int j = 0;j<acolumn;j++)
        {
            if(large<a[i][j])
                large=a[i][j];
        }
    }
    printf("Largest element in matrix is %d",large);
    return 0;
}
/*
Enter size of row of A:3
Enter size of column of A:3
a[0][0]- -22
a[0][1]- -36
a[0][2]- -1
a[1][0]- -256
a[1][1]- -42
a[1][2]- -63
a[2][0]- -45
a[2][1]- -63
a[2][2]- -52
Largest element in matrix is -1
*/