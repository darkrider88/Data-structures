
#include<stdio.h>
#include<stdlib.h>
void delete();
void display();
//defining the structure of list
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*start;
void main()
{
    int val,choice,count=0;
    char ch;
    struct node *new, *temp;
    start = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value: ");
    scanf("%d",&val);
    start->data = val;
    start->prev = NULL;
    start->next = NULL;
    printf("How many node you want to enter: ");
    scanf("%d",&choice);
    temp = start;
    while (count!=choice)
    {
       new = (struct node *)malloc(sizeof(struct node));
       printf("Enter the value: ");
       scanf("%d",&val);
       new->data = val;
       new->prev = temp;
       new->next = NULL;
       temp->next = new;
       temp = temp->next;
       count++;

    }
    //printing the list
    temp = start;
    while(temp!=NULL)
    {
        new = temp;
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}