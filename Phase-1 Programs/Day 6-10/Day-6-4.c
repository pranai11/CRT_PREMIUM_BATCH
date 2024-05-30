//withdraw,deposit,balance
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int option;
    char choice;
    float bal=5000, amount;
    do
    {
    printf("======================\n");
    printf(" welcome to GIST ATM \n");
    printf("1. Balance \n");
    printf("2. Deposit \n");
    printf("3. Withdraw \n");
    printf("4. Exit \n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    switch (option)
    {
        case 1: printf("Your account balance:%.2f.\n",bal);
                break;
        case 2: printf("Enter amount to deposit:");
                scanf("%f",&amount);
                bal += amount;
                printf("%.2f amount is deposited successfully.\n",amount);
                printf("New balance is:%.2f.\n",bal);
                break;
        case 3: printf("Enter amount to withdraw:");
                scanf("%f",&amount);
                bal -= amount;
                printf("%.2f amount is debited successfully.\n",amount);
                printf("New balance is:%.2f.\n",bal);
                break;
        case 4: exit(0);
        default: printf("Choose valid option.\n");
                 break;
    }
    printf("Do you want to repeat another transaction(y/n):");
    scanf(" %c",&choice);
    }while(choice=='y'||choice=='Y');
}