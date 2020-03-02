#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
}*top;

void push()
{
    int value;
    struct node *x,*start;
    printf("Enter the value: ");
    scanf("%d",&value);
    x = (struct node *)malloc(sizeof(struct node));
    x->data = value;
    x->next = NULL;
    if(top == NULL)
    {
        top = x;
        start =x;
    }
    else
    {
        x->next = top;
        top = x;
    }
}

void pop()
{
    struct node *x;
    x = top;
    if(x == NULL)
    {
        printf("Cant't POP..stack is empty");
        return;
    }
    else
    {
        x = x->next;
    }
    free(top);
    top = x;

}

void display()
{
    struct node *temp;
    temp = top;
    if(top == NULL)
    {
        printf("stack is empty.\n");
    }
    else
    {
        do
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }while(temp != NULL);
    }
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
            push();    
            break;
        case 2: pop();
                break;
        
        case 3: display();
                break;
        default: printf("Select a valid number !!!!");
            break;
        }
    }
}