#include<stdio.h>
#include<stdlib.h>
void insert(int);
//void deleteme();

// first i tried with a function then removed it

// only delete function is not working 
void display();
struct node
    {
        int data;
        struct node *next;

    }*start;

void main()
{
    int value,choice;
    struct node *ptr1, *ptr2, *dup;
    char ch;
    while(1)
    {
        
        printf("1.Insert an element.\n2. Display\n");
        printf("select your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d",&value);
            insert(value);
            break;
        
        case 2:
            display();
            break;
        
        default:
            printf("Error!! Enter a valid choice.");
            break;
        
        }
        //system("clear");
    }
       
}
void insert(int value)
{
    struct node *temp, *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    if(start == NULL)
    {
        start = newNode;
        newNode->next = start;
    }
    else
    {
        temp = start;
        while(temp->next != start)//traversing to the end of list just before the start
            temp = temp->next;
        temp->next = newNode; //adding the node at last
        newNode->next = start; //connecting the node back to start
    }
    
}




void display()
{
	struct node *temp;
	temp=start;
	if (start==NULL)
	{
		printf("EMPTY LIST\n");
	}
	else{
	do
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}while(temp!=start);
}
	printf("\n");
}