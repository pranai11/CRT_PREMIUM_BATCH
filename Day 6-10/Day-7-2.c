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
            printf("- + - ");
        printf("\n");
    }

    int n2,i2,j2;
    printf("Enter a number:");
    scanf("%d",&n2);
    for(i2=1;i2<=n2;i2++)
    {
        for(j2=1;j2<=i2;j2++)
            printf("%c ",64+i2);
        printf("\n");
    }

    int n3,i3,j3;
    printf("Enter a number:");
    scanf("%d",&n3);
    for(i3=1;i3<=n3;i3++)
    {
        for(j3=n3;j3>=i3;j3--)
            printf("%d ",j3);
        printf("\n");
    }
}