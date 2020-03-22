#include<stdio.h>
void main()
{
    int i,j,ar[20],size,t,key,m;
    printf("ENter the size array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the value %d: ",i+1);
        scanf("%d",&ar[i]);
    }

    /* compact algo
    for(i=1;i<size;i++)
    {
        key = ar[i];
        // here we compare the left elements and  increase the key value to the right
        j = i-1;
        while(j>=0 && ar[j] > key)
        {
            ar[j+1] = ar[j];
            j = j-1;
        }
        // storing the smallest element in the correct position
        ar[j+1] = key;      
    }
    */

    //sorting starts here
    for(i=1;i<size;i++)
    {
        // [7, 1, 23, 4, 19]
        key = ar[i];
        // here we compare the left elements and  increase the key value to the right
        j = i-1;
        printf("key = %d\n",key);
        printf("j = %d\n",j);
        printf("Current array: ");
        for(m = 0; m < size; m++)
        {
            printf("%d ", ar[m]);
        }
        printf("\n");
        while(j>=0 && ar[j] > key)
        {
            ar[j+1] = ar[j];
            j = j-1;
        }
        // storing the smallest element in the correct position
        printf("j = %d\n",j);
        ar[j+1] = key;
        printf("Current array: ");
        for(m = 0; m < size; m++)
        {
            printf("%d ", ar[m]);
        }
        printf("\n\n");
        
    }

    for(i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }

}