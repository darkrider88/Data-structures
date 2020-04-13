#include<stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int ar[], int first, int last)
{
    int pivot = ar[first], i = first, j = last;
    
    while(i < j)
    {
        while(ar[i] <=  pivot)
        {
            i++;
        }
        while(ar[j] > pivot)
        {
            j--;
        }
        // checking if j hasn't crossed the i, if not the  swap it
        if(i < j)
            swap(&ar[i],&ar[j]);
    }
    // swapping the pivot element to its place, now left side of it have all the elements small and right will have  large
    swap(&ar[first],&ar[j]);
    return j;
}

void quicksort(int ar[],int first, int last)
{
    int location;
    if(first < last)
    {
        location = partition(ar, first, last);
        quicksort(ar, first, location-1);
        quicksort(ar, location+1, last);
    }
}

// Function to print eklements of an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
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

    quicksort(ar,0,size-1);
    printf("\nThe sorted array is : ");
    printArray(ar, size);

}