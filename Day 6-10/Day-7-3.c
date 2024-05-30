#include<stdio.h>
void main()
{
    //Patterns
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-i)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
    //Patterns
    int n2,i2,j2;
    printf("Enter a number:");
    scanf("%d",&n2);
    for(i2=1;i2<=n2;i2++)
    {
        for(j2=1;j2<=n2;j2++)
        {
            printf("* ");
        }

        printf("\n");
    }
}

/*
// PATTERNS
1)

* * * *
* * * *
* * * *
* * * *

#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

2)

*
* *
* * *
* * * *

// PATTERNS

#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

3)

A
B B
C C C
D D D D

// PATTERNS

#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }
}

4)

1 
2 4 
3 5 7 
6 8 10 12 
9 11 13 15 17 

#include <stdio.h>

void main() {
    int n,i,j;
    int e=0,o=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=1;j<=i;j++){
                e+=2;
                printf("%d ",e);
            }
        }
        else{
            for(j=1;j<=i;j++){
                printf("%d ",o);
                o+=2;
            }
        
            }
            printf("\n");
    }
}


5)

* * * *
* * * 
* * 
*

#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
}

6)

      *
    * *
  * * *
* * * *

#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

7)

      *
    * * * 
  * * * * *
* * * * * * *

#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" *");
        }
      
        printf("\n");
    }
}

8)

 * * * * * * * * *
   * * * * * * *
     * * * * *
       * * *
         *


#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" *");
        }
      
        printf("\n");
    }
}
*/