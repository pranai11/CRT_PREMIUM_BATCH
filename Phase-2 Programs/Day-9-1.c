//Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};

void create();
void display();

struct node *nn,*rn=NULL,*cu;

void main(){
    int choice, option;
    do
    {
        printf("\nChoose options:\n");
        printf("1.Create/Insert.\n");
        printf("2.Display.\n");
        printf("3.Exit.\n");
        printf("Your option:");
        scanf("%d", &choice);
        switch (choice)
        {
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
        scanf("%d", &option);
    } while (option != 0);
}

void create(){
    nn=(struct node*)malloc(sizeof(struct node *));
    printf("Enter data value:");
    scanf("%d",&(nn->data));
    nn->left=NULL;
    nn->right=NULL;
    if(rn==NULL){
        rn=cu=nn;
    }
    else{
        cu=rn;
        while(cu->left!=NULL || cu->right!=NULL){
            printf("hshhs");
            if(nn->data < cu->data){
                printf("hsdsud");
                cu=cu->left;
            }
            else{
                printf("shdfosijf");
                cu=cu->right;
            }
        }
        if(nn->data < cu->data){
                cu->left=nn;
        }
        else{
            cu->right=nn;
        }
    }
}

void display(){
    cu=rn;
    printf("%d\n",cu->data);
    cu=cu->left;
    printf("%d\n",cu->data);
    cu=cu->left;
    printf("%d\n",cu->data);
    cu=cu->left;
    printf("%d\n",cu->data);
    cu=cu->left;
    printf("%d\n",cu->data);
}