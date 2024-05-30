//Diamond pattern
#include <stdio.h>
void main() {
    //Pattern
    int n,i,j;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}

// Hour Glass pattern
#include <stdio.h>

void main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" %d",i);
        }
     
        printf("\n");
    }
    for(i=2;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }

        for(j=1;j<=2*i-1;j++){
            printf(" %d",i);
        }
     
        printf("\n");
    }

    }