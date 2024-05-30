#include<stdio.h>
void main()
{
    //Perfect number in a range
    int start,stop;
    printf("Enter start value:");
    scanf("%d",&start);
    printf("Enter stop value:");
    scanf("%d",&stop);
    for(int i=start;i<=stop;i++)
    {
        int sum=0;
        for(int j=1;j<=i/2;j++)
            {
                if(i%j==0)
                    sum+=j;
            }
        if(i==sum)
            printf("%d ",i);
    }
      
    //prime no's in given range
    int pst,pso;
    printf("\nEnter start value:");
    scanf("%d",&pst);
    printf("Enter stop value:");
    scanf("%d",&pso);
    for(int k=pst;k<=pso;k++)
    {
        int count=0;
        for(int l=1;l<=k;l++)
        {
            if(k%l==0)
                count++;
        }
        if(count==2)
            printf("%d ",k);
    }
}