#include<stdio.h>
void main()
{   //Electricity Bill
    int units;
    float gst,cc,cost,bill;
    printf("Enter no of units:");
    scanf("%d",&units);

    if(units<=50)
        cost = units*3;
    else if(units>50 && units<=100)
        cost = 150+(units-50)*4;
    else if(units>100 && units<=200)
        cost = 150+200+(units-100)*5.5;
    else if(units>200 && units<=300)
        cost = 150+200+550+(units-200)*7.5;
    else
        cost = 150+200+550+750+(units-300)*9;

    gst = cost*0.05;
    cc = cost*0.02;
    bill = cost+gst+cc;
    printf("Cost:%.2f\n",cost);
    printf("GST:%.2f\n",gst);
    printf("Customer Charges:%.2f\n",cc);
    printf("Total Electricity Bill: %.2f\n",bill);   
}