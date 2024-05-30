//Stacks using linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *nn,*st=NULL,*cu,*top,*stop,*atop;
void push();
void display();
void pop();
void sum();
int acount();
void average();
void peek();
void main(){
    int choice,option;
    do{
        printf("\nChoose options:\n");
        printf("1.Push.\n");
        printf("2.Display.\n");
        printf("3.Pop\n");
        printf("4.Sum.\n");
        printf("5.Average.\n");
        printf("6.Peek.\n");
        printf("7.Exit.\n");
        printf("Your option:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                pop();
                break;
            case 4:
                sum();
                break;
            case 5:
                average();
                break;
            case 6:
                peek();
                break;
            case 7:
                printf("\nCode Exited.\n");
                exit(0);
        }
        printf("\nDO YOU WANT TO CONTINUE(1) OR NOT(0):");
        scanf("%d",&option);
    }while(option!=0); 
}
void push(){
    nn=(struct node *)malloc(sizeof(struct node *));
    printf("Enter data:");
    scanf("%d",&(nn->data));
    nn->next=st;
    st=nn;
    printf("Element pushed successfully.\n");

}
void display(){
    if(st==NULL)
        printf("Stack is empty.");
    else{
        top=st;
        while(top!=NULL){
            printf("%d\n",top->data);
            top=top->next;
        }
    }
}
void pop(){
    if(st==NULL)
        printf("Stack is empty.");
    else{
        st=st->next;
        printf("Element popped successfully.\n");
    }
}
void sum(){
    if(st==NULL)
        printf("Stack is empty.Sum cannot be performed.\n");
    else{
        stop=st;
        int sum=0;
        while(stop!=NULL){
            sum=sum+(stop->data);
            stop=stop->next;
        }
        printf("Sum is %d.",sum);
    }
}
int acount(){
    int count=0;
    if(st==NULL)
        printf("Stack is empty.Average cannot be performed.\n");
    else{
        top=st;
        while(top!=NULL){
            count++;
            top=top->next;
        }
    }
    return count;
}
void average(){
    float sum=0;
    if(st==NULL)
        printf("Stack is empty.Average cannot be performed.\n");
    else{
        atop=st;
        while(atop!=NULL){
            sum+=atop->data;
            atop=atop->next;
        }
    }
    printf("%.2f",sum/acount());
}
void peek(){
    if(st==NULL)
        printf("Stack is empty.\n");
    else
        printf("%d",st->data);
}