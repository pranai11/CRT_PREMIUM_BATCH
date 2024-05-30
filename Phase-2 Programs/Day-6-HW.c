// Calculator using Stack
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *nn,*st=NULL,*cu,*top,*stop,*atop,*sstop,*subsi;
void push();
void display();
void pop();
void add();
void sub();
int acount();
void average();
void mul();
void cdiv();
void main(){
    int choice,option;
    printf("\n=============Calculator using stack================");
    do{
        printf("\nChoose options:\n");
        printf("1.Push.\n");
        printf("2.Pop.\n");
        printf("3.Display\n");
        printf("4.Addition.\n");
		printf("5.Subtraction.\n");
        printf("6.Multiplication.\n");
        printf("7.Division.\n");
        printf("8.Average.\n");
        printf("9.Exit.\n");
        printf("Your option:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                add();
                break;
			case 5:
				sub();
				break;
            case 6:
                mul();
                break;
            case 7:
                cdiv();
                break;
            case 8:
                average();
                break;
            case 9:
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
        printf("Stack Elements are...\n");
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
int acount(){
    int count=0;
        top=st;
        while(top!=NULL){
            count++;
            top=top->next;
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
        printf("%.2f",sum/acount());
    }
}
void add(){
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
void sub(){
	int subs=0;
	if(st==NULL){
        printf("Stack is empty.Subtraction cannot be performed.\n");
	}
    else{
        sstop=st;
        subsi=st->next;
        subs=(sstop->data)-(subsi->data);
        while(subsi->next!=NULL){
            subsi=subsi->next;
            subs=subs-(subsi->data);
        }
	printf("Subtraction is %d.",subs);
    }
}
void cdiv(){
    float divs=0;
    if(st==NULL){
        printf("Stack is empty.Division cannot be performed.\n");
	}
    else{

        sstop=st;
        subsi=st->next;
        divs=(sstop->data)/(subsi->data);
        while(subsi->next!=NULL){
            subsi=subsi->next;
            divs=divs/(subsi->data);
        }
	printf("Division is %.2f.",divs);
    }
}
void mul(){
    int mul=0;
    if(st==NULL){
        printf("Stack is empty.Multiplication cannot be performed.\n");
	}
    else{

        sstop=st;
        subsi=st->next;
        mul=(sstop->data)*(subsi->data);
        while(subsi->next!=NULL){
            subsi=subsi->next;
            mul=mul*(subsi->data);
        }
	printf("Multiplication is %d.",mul);
    }
}