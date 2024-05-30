//Queue using structures
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *fe = NULL, *re = NULL, *te, *nn, *cu;
void enqueue();
void dequeue();
void display();

void main()
{
    int choice, option;
    do
    {
        printf("\nChoose options:\n");
        printf("1.Enqueue.\n");
        printf("2.Dequeue.\n");
        printf("3.Display.\n");
        printf("4.Exit.\n");
        printf("Your option:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("\nCode Exited.\n");
            exit(0);
        }
        printf("\nDO YOU WANT TO CONTINUE(1) OR NOT(0):");
        scanf("%d", &option);
    } while (option != 0);
}
void enqueue()
{
    nn = (struct node *)malloc(sizeof(struct node *));
    printf("Enter data value:");
    scanf("%d", &(nn->data));
    nn->next = NULL;
    if (re == NULL && fe == NULL)
    {
        fe = re = cu = nn;
    }
    else
    {
        nn->next = cu;
        fe = nn;
        cu = nn;
    }
    printf("Data enqueued successfully");
}
void dequeue()
{
    if (re == NULL && fe == NULL)
    {
        printf("Queue is empty.Can't perform deletion");
    }
    else
    {
        te = fe;
        if (te->next == NULL)
        {
            re = fe = NULL;
        }
        else
        {
            while (te->next->next != NULL)
            {
                te = te->next;
            }
            te->next = NULL;
            re = te->next;
            printf("Data dequeued successfull.");
        }
    }
}
void display()
{
    te = fe;
    if (re == NULL && fe == NULL)
        printf("Queue is empty.\n");
    else
    {
        printf("Queue is..\n");
        while (te != NULL)
        {
            printf("<--%d", te->data);
            te = te->next;
        }
    }
}
