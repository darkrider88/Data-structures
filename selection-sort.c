#include<stdio.h>
void main()
{
    int i,j,min,ar[20],size,t;
    printf("ENter the size array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the value %d: ",i+1);
        scanf("%d",&ar[i]);
    }
    //sorting 

    for(i=0;i<size-1;i++)
    {
        min = i;
        for(j=i+i;j<size;j++)
        {
            if(ar[j] < ar[min])
            {
                min = j;
            }
            t = ar[min];
            ar[min] = ar[i];
            ar[i] = t;
        }
    }
    printf("\nSorted array: ");
     for(i = 0; i < size; i++)
    {
        printf("%d  ", ar[i]);
    }
}