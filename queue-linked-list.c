#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
}*front,*rear;

void enqueue()
{
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);
    struct node *x;
    x = (struct node *)malloc(sizeof(struct node));
    x->data = value;
    x->next = NULL;
    if(rear == NULL)
    {
        front = x;
        rear = x;
    }
    else
    {
        rear->next = x;
        rear = rear->next;        
    }
}

void dequeue()
{
    struct node *  x;
    if(front == NULL)
    {
        printf("Queue underflow");
        return;
    }
    else
    {
        x = front;
        front = front->next;
        x->next =NULL;
    }
    free(x);  
}

void display()
{
    struct node * x;
    x = front;
    while(x!=rear)
    {
        printf("%d\t",x->data);
        x = x->next;

    }
    printf("%d",rear->data);
    printf("\n");
}
void main()
{
    int choice,value;
    while(1)
    {
        printf("1.Push an element\n2.Pop an element.\n3.Display\n");
        printf("\nYour choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: 
            enqueue();    
            break;
        case 2: dequeue();
                break;
        
        case 3: display();
                break;
        default: printf("Select a valid number !!!!");
            break;
        }
    }
}