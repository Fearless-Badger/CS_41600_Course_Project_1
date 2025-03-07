#include <stdio.h>

/*Sort the array using the insertion sort algorithm*/
void insertionSort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {   
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

/*Print out the array into the console*/
void printArray(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*Sorts and prints out the given array before and after sorting*/
void sortArray(int arr[], int size)
{
    // Print before sorting
    printf("Before sorting: ");
    printArray(arr, size);

    insertionSort(arr, size); // Sort array
    
    // Print after sorting
    printf("After sorting: ");
    printArray(arr, size);
    printf("\n");
}

int main()
{
    //First array
    int arr[] = {34, 56, 11, 21, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, size);
    
    //Second Array
    int arr2[] = {7, 23, 45, 12, 38, 6, 29, 50, 18, 33};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    sortArray(arr2, size2);

    //Third Array
    int arr3[] = {5, 12, 47, 29, 33, 8, 20, 44, 17, 3, 
                50, 25, 6, 39, 14, 41, 9, 22, 36, 48};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    sortArray(arr3, size3);
    
    return 0;
}

