#include<stdio.h>
#include<stdlib.h>
void sort(int ar[],int size)
{
    int temp,i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
}

void search(int key,int ar[],int size)
{
    int middle,end,start,i,location;
    start = 0;
    end = size -1;
    middle = (start+end)/2;
    while(start <= end)
    {
                if(ar[middle] < key)
                {
                    start = middle + 1;
                }
                else if(ar[middle] == key)
                {
                    printf("\n\n%d elements is at location %d\n\n",key,middle+1);
                    break;
                }
                else
                {
                    start = middle -1;
                }
            middle = (start + end)/2;
            
    }
}
void main()
{
    int ar[20],i,size,key;
    printf("\nEnter the size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("\nenter the value of %d element: ");
        fflush(0);
        scanf("%d",&ar[i]);
    }
    printf("Enter the you want to search: ");
    scanf("%d",&key);
    sort(ar,size);
    printf("\n The sorted array is : ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",ar[i]);
    }
    search(key,ar,size);

}
