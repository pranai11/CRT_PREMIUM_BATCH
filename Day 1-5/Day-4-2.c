#include<stdio.h>
void main()
{
    //RTC BILL
    int exp,del,sudel,choice,n;
    float gst,tollc,cost,t_bill;
    printf("Types of Buses:\n");
    printf("1.Express - 300\n");
    printf("2.Delux - 500\n");
    printf("3.Super Delux - 750\n");
    printf("Enter choice:");
    scanf("%d",&choice);
    printf("\nEnter no of tickets:");
    scanf("%d",&n);
    if(n<6)
    {
        if(choice == 1)
        {
            cost = 300*n;
            goto totalbill;
        }
        else if(choice == 2)
        {
            cost = 500*n;
            goto totalbill;
        }
        else if(choice == 3)
        {
            cost = 750*n;
            goto totalbill;
        }
        else{
            printf("Invalid choice\n");
        }
       
    totalbill:
    gst = cost*0.05;
    tollc = cost*0.02;
    t_bill = cost+gst+tollc;
    printf("Tickets cost:%.2f\n",cost);
    printf("GST Cost:%.2f\n",gst);
    printf("Toll charges:%.2f\n",tollc);
    printf("Total Bill:%.2f\n",t_bill);
    
    }
    else
    {
        printf("A person is allowed to book 6 tickets at max.\n");
    }
    
}