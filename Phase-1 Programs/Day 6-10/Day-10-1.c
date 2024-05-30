//Display elements present at prime indices
#include <stdio.h>
int main() {
   int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        int count=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("Element present at prime index-%d is %d \n",i,a[i]);
        }
    }

    return 0;
}

/*
Enter size of array:8
Enter array elements:
Enter a[0]:22
Enter a[1]:33
Enter a[2]:55
Enter a[3]:44
Enter a[4]:66
Enter a[5]:99
Enter a[6]:88
Enter a[7]:77
Element present at prime index-2 is 55 
Element present at prime index-3 is 44 
Element present at prime index-5 is 99 
Element present at prime index-7 is 77 
*/


//Displaying only even elements present in an array
#include <stdio.h>
int main() {
   int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            printf("Even Element is:%d\n",a[i]);
    }

    return 0;
}
/*
Enter size of array:5
Enter array elements:
Enter a[0]:2
Enter a[1]:3
Enter a[2]:4
Enter a[3]:6
Enter a[4]:22
Even Element is:2
Even Element is:4
Even Element is:6
Even Element is:22
*/

//Sum of all diagonal elements in a matrix
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
    
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            if(i==j)
                sum+=a[i][j];
            if ((i==0 && j==column-1) || (i==row-1 && j==0) ) //or i+j==row-1
                sum+=a[i][j];
        }
    }
    printf("Sum of diagonal elements are %d",sum);
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
Sum of diagonal elements are 25
*/

//Sum of corner elements
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
    int sum=a[0][0]+a[arow-1][0]+a[arow-1][acolumn-1]+a[0][arow-1];
    printf("Sum of corner elements is %d",sum);
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
Sum of corner elements is 20
*/

