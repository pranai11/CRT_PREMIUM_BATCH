//circular linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void create();
void display();
void insertatbegin();
void insertatend();
void deleteatend();
struct node *nn,*st=NULL,*cu,*te,*dte;
void main(){
    int choice,option;
    do{
        printf("\nChoose options:\n");
        printf("1.Create.\n");
        printf("2.Display.\n");
        printf("3.Insert at begin.\n");
        printf("4.Insert at end.\n");
        printf("5.Delete at end.\n");
        printf("6.Exit.\n");
        printf("Your option:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                insertatbegin();
                break;
            case 4:
                insertatend();
                break;
            case 5:
                deleteatend();
                break;
            case 6:
                printf("\nCode Exited.\n");
                exit(0);
        }
        printf("\nDO YOU WANT TO CONTINUE(1) OR NOT(0):");
        scanf("%d",&option);
    }while(option!=0);    
}
void create(){
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("Enter node value:");
    scanf("%d",&(nn->data));
    nn->next=NULL;
    if(st==NULL){
        nn->next=nn;
        st=nn;
        cu=nn;
    }
    else{
        cu->next=nn;
        nn->next=st;
        cu=nn;
        }
    printf("Node created.\n");
}
void display(){
    if(st->next==NULL)
        printf("\nLinked List is Empty.\n");
    else{
        te=st;
        printf("Elements are...\n");
        do{
            printf("%d-->",te->data);
            te=te->next;
        }while(te->next!=st->next);
        printf("%d",st->data);
    }
}
void insertatbegin(){
    printf("Before insertion at begin:\n");
    display();
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("\nEnter node value:");
    scanf("%d",&(nn->data));
    nn->next=NULL;
    if(st==NULL){
        st=nn;
        cu=nn;
        nn->next=nn;
    }
    else{
        cu->next=nn;
        nn->next=st;
        st=nn;
        }
    printf("Node created.\n");
    printf("After insertion at begin:\n");
    display();
}
void insertatend(){
    printf("Before insertion at End:\n");
    display();
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("\nEnter node value:");
    scanf("%d",&(nn->data));
    if(st==NULL){
        st=nn;
        cu=nn;
        nn->next=nn;
        display();
    }
    else{
        cu->next=nn;
        nn->next=st;
        cu=nn;
        printf("After insertion at End:\n");
        display();
    }
}
// void deleteatend(){
//     if(st==NULL)
//         printf("List is empty cannot perform delete operation.\n");
//     else{
//         printf("Before Deletion.\n");
//         display();
//         dte=st;
//         if(dte->next==dte){
//             cu->next=st->next=NULL;
//             free(st);
//             struct node *st=NULL;
//             st->next=NULL;
//             printf("jnkjn");
//             display();
//         }
//         else{
//             while(dte->next->next!=st){
//                 dte = dte->next;
//             }
//             dte->next = st;
//             printf("\nAfter Deletion.\n");
//             display();
//         }
//     }
// }