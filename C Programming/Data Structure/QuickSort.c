#include <stdio.h>
// Function to swap two elements
void swap(int array[], int i, int j)
{
    int temp=array[i];
    array[i]=array[j];
    array[j]=temp;
}
// Function to partition the array and return the pivot index
int partition(int array[], int low, int high)
{
    int pivot=array[high];
    int i=low-1;
    for(int j=low; j<=high-1; j++)
    {
        if(array[j]<=pivot)
        {
            i++;
            swap(array, i, j);//swap items while finding items less than pivot
        }
    }
    swap(array, i+1, high);//swap item with pivot
    return (i+1);//return index of pivot
}
// Function to implement QuickSort
void quickSort(int array[], int low, int high)
{
    if(low<high)
    {
        // Find the pivot element such that
        // elements smaller than the pivot are on the left
        // elements greater than the pivot are on the right
        int pivotIndex=partition(array, low, high);
        // Recursive calls to sort the sub-arrays
        quickSort(array, low, pivotIndex-1);
        quickSort(array, pivotIndex+1, high);
    }
}
// Function to print an array
void printArray(int array[], int size)
{
    for(int i=0; i<size; i++)//for(int i=0; i<=size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int array[]={7, 2, 1, 6, 8, 5, 3, 4};
    /*int array[5];
    for(int i=0; i<=5; i++){
        scanf("%d",&array[i]);
    }*/
    int size=sizeof(array)/sizeof(array[0]);
    printf("Original array: ");
    printArray(array, size);
    quickSort(array, 0, size);
    printf("Sorted array: ");
    printArray(array, size);
    return 0;
}
