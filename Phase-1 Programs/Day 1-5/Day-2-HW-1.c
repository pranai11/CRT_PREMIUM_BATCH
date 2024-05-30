#include<stdio.h>
void main()
{
    int nofd;
    int years,months,weeks,days;

    printf("Enter no.of days:");
    scanf("%d",&nofd);

    if(nofd >= 365){
        years = nofd/365;
        printf("\nNo of years:%d\n",years);
        nofd = nofd-(365*years);    }
    else{
        printf("No of years:%d\n",0);    }
    
    if(nofd >= 30)    {
        months = nofd/30;                                     //Output
        printf("No of months:%d\n",months);                   //Enter no.of days:4253
        nofd = nofd-(months*30);    }                         //No of years:11
    else    {                                                 //No of months:7
        printf("No of moths:%d\n",0);    }                    //No of weeks:4
    if(nofd>=7){                                              //No of days:0
        weeks =nofd/7;
        printf("No of weeks:%d\n",weeks);
        nofd = nofd-(weeks*7);    }
    else{
        printf("No of Weeks:%d\n",0);    }
    
    if(nofd>=1){
        printf("No of days:%d\n",nofd);    }
    else{
        printf("No of days:%d\n",0);    }  }