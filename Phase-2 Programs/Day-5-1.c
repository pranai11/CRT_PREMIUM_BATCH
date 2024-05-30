//Single Linked List Program

//Initially we create nn,st,cu as single first node.Refer cw for clarity.
//st means starting node which act as head that indicates first element in linked list.
//cu means current node that act as last element present in the linked list.
//te is temporary address/node that is used for traversal that starts from st to cu.

#include<stdio.h>
#include<stdlib.h>
//Template creation for linked list using structure
struct node{
    int data;
    struct node *next;
};
void create();
void display();
void insertionatbegin();
void insertionatend();
void insertatanyposition();
void deleteatbegin();
void deleteatend();
void deleteatanyposition();
struct node *nn,*te,*cu,*st=NULL;
void main(){
    int choice,option;
    do{
        printf("\nChoose options:\n");
        printf("1.Create.\n");
        printf("2.Display.\n");
        printf("3.Insertion at begin.\n");
        printf("4.Insertion at end.\n");
        printf("5.Insertion at any position.\n");
        printf("6.Deletion at Beginning.\n");
        printf("7.Deletion at End.\n");
        printf("8.Deletion at any position.\n");
        printf("9..Exit.\n");
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
                insertionatbegin();
                break;
            case 4:
                insertionatend();
                break;
            case 5:
                insertatanyposition();
                break;
            case 6:
                deleteatbegin();
                break;
            case 7:
                deleteatend();
                break;
            case 8:
                deleteatanyposition();
                break;
            case 9:
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
    nn->next=NULL;//As new node is created its address will be set as NULL.It is also a cu but it will become cu at line 51(updating previous cu with nn that is created now)if elements are already present in list otherwise line 47.
    if(st==NULL){
        st=nn;
        cu=nn;
    }
    else{
        cu->next=nn;//Previous cu next contains present created new node address so that previous will be linked to new created nn
        cu=nn;//so as previous node is linked with nn in above step.Now we need to change nn as cu.so that it can be used for next linkage.
        //As this is self referential structure cc and nn act as address so we store next value of cu as address of nn directly by nn but not nn->next.
    }
    printf("Node created.\n");
}
void display(){
    if(st==NULL)//st is null means list is empty as it is set null during initialization of program.
        printf("Linked List is Empty.\n");
    else{
        int i=1;
        te=st;//te should start from first node.so we assign st to te.
        printf("Elements are...\n");
        while(te!=NULL){
            printf("%d-->",te->data);
            te=te->next;//Moving from one node to next node till it reaches cu i.e.,next becomes null as cu will be having null.
        }
    }
}
void insertionatbegin(){
    printf("Before insertion at begin:\n");
    display();
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("\nEnter node value:");
    scanf("%d",&(nn->data));
    if(st==NULL){
        nn->next=NULL;
        st=nn;
        cu=nn;
        display();
    }
    else{
        nn->next=st;
        st=nn;
        printf("After insertion at begin:\n");
        display();
    }
}
void insertionatend(){
    printf("Before insertion at end:\n");
    display();
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("Enter node value:");
    scanf("%d",&(nn->data));
    if(st==NULL){
        nn->next=NULL;
        st=nn;
        cu=nn;
        display();
    }
    else{
        cu->next=nn;
        nn->next=NULL;
        printf("After insertion at end:\n");
        display();
    }
}
void insertatanyposition(){
    printf("Before insertion at any position:\n");
    display();
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("\nEnter node value:");
    scanf("%d",&(nn->data));
    if(st==NULL){
        nn->next=NULL;
        st=nn;
        cu=nn;
        display();
    }
    else{
        int pos;
        printf("Enter position where to be inserted:");
        scanf("%d",&pos);
        int count=1;
        te=st;
        while(te!=NULL){
            count++; 
            if(count==pos){
                nn->next=te->next;
                te->next=nn;
                printf("After insertion at any position:\n");
                display();
                break;
            }
            else if(count<pos){
                nn->next=NULL;
                printf("List reached end.Cannot insert at your required position.\n");
                break;
            }
            else
                continue;
            te=te->next;
        }
    }
}
void deleteatbegin(){
    if(st==NULL)
        printf("List is empty cannot perform delete operation.\n");
    else{
        printf("Before Deletion.\n");
        display();
        te=st->next;
        st=te;
        printf("After Deletion.\n");
        display();
    }
}
void deleteatend(){
    if(st==NULL)
        printf("List is empty cannot perform delete operation.\n");
    else{
        printf("Before Deletion.\n");
        display();
        te=st;
        while(te->next->next!=NULL){
            te = te->next;
        }
        te->next = NULL;
        printf("After Deletion.\n");
        display();
    }
}
void deleteatanyposition(){
    int pos;
    printf("Enter position of element to be deleted:");
    scanf("%d",&pos);
    if(st==NULL)
        printf("List is empty cannot perform delete operation.\n");
    else{
        struct node *te1,*te2;
        te1=st;
        te2=st->next;
        printf("Before Deletion.\n");
        display();
        for(int i=2;i<=pos;i++){
            if(i==pos){
                te1->next=te2->next;
                te2->next=NULL;
                printf("\nAfter Deletion.\n");
                display();
                break;
            }
            te1=te2;
            te2=te2->next;
        }
    }
}