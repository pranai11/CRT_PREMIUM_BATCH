//Double linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
void create();
void display();
struct node *cu,*nn,*te,*st=NULL;
void main(){
    int choice,option;
    do{
        printf("\nChoose options:\n");
        printf("1.Create.\n");
        printf("2.Display.\n");
        printf("3.Exit.\n");
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
        nn->prev=NULL;
        st=nn;
        cu=nn;
    }
    else{
        nn->prev=cu;
        cu->next=nn;
        cu=nn;
    }
    printf("Node created.\n");
}
void display(){
    //Forward
    int bf;
    printf("Forward(1) or Backward(0):");
    scanf("%d",&bf);
    if(bf==1){
        if(st==NULL)
            printf("Linked List is Empty.\n");
        else{
            struct node *fte;
            fte=st;
            printf("Elements are...\n");
            while(fte!=NULL){
                printf("%d-->",fte->data);
                fte=fte->next;
            }
        }
    }
    else{
        //Backward
        if(st==NULL)
            printf("Linked list is Empty.\n");
        else{
            struct node *bte;
            bte=cu;
            printf("Elements are...\n");
            while(bte->prev!=NULL){
                printf("%d-->",bte->data);
                bte=bte->prev;
            }
        }
    }
}