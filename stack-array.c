#include<stdio.h>
#include<stdlib.h>
int stack[100],top=-1,size=100;

void push(int value)
{
    if(top==size-1)
    {
        printf("stack overflow");
        exit(0);
    }
    else{
        top = top +1;
        stack[top] = value;
    }
   
}

void pop()
{
    if(top == size -1)
    {
        printf("stack overflow");
        exit(0);
    }
    else
    {
        top = top -1;
    }
    
}

void display()
{
    int i =0;
    if(top==-1)
    {
        printf("stack is empty");
        exit(0);
    }
    else
    {
        do{
            printf("%d\t",stack[i]);
            i++;

        }while (i<=top);
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
        case 1: printf("Enter the element: ");
            scanf("%d",&value);
            push(value);    
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