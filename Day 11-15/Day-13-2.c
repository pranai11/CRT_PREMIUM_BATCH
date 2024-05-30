//ATM withdraw,deposit,balance using functions and global variables
#include<stdio.h>
#include<stdlib.h>
float bal=5000, amount; //Global variables 
void balance(){
    printf("Your account balance is: %.2f \n",bal);
}
void deposit(){
    printf("Enter amount to deposit:");
    scanf("%f",&amount);
    bal += amount;
    printf("%.2f amount is deposited successfully.\n",amount);
    printf("New balance is:%.2f.\n",bal);
}
void withdraw(){
    printf("Enter amount to withdraw:");
    scanf("%f",&amount);
    bal -= amount;
    printf("%.2f amount is debited successfully.\n",amount);
    printf("New balance is:%.2f.\n",bal);    
}
void main()
{
    int option;
    char choice;
    do
    {
    printf(" ***welcome to GIST ATM***\n");
    printf("1. Balance \n");
    printf("2. Deposit \n");
    printf("3. Withdraw \n");
    printf("4. Exit \n");
    printf("Enter your option: ");
    scanf("%d", &option);
    switch (option)
    {
        case 1: balance();
                break;
        case 2: deposit();
                break;
        case 3: withdraw();
                break;
        case 4: exit(0);
        default: printf("Choose valid option.\n");
                 break;
    }
    printf("Do you want to perform another transaction(y/n):");
    scanf(" %c",&choice);
    }while(choice=='y'||choice=='Y');
}
