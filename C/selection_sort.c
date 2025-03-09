#include <stdio.h>

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main()
{
    int arr1[] = {64, 25, 12, 22, 11};
    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {17, -30, 24, 9, 5, 28, 49, 10};
    int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {10, 47, 1002, 4839, 82, 8282, 91, 9420};
    int arrSize3 = sizeof(arr3) / sizeof(arr3[0]);

    //Sorts 1st Array
    printf("Original Array 1: ");
    for (int i = 0; i < arrSize1; i++)
    {
      printf("%d ", arr1[i]);
    }
    selectionSort(arr1, arrSize1);
    printf("\nSorted Array 1: ");
    for (int i = 0; i < arrSize1; i++)
    {
      printf("%d ", arr1[i]);
    }

    //Sorts 2nd Array
    printf("\nOriginal Array 2: ");
    for (int i = 0; i < arrSize2; i++)
    {
      printf("%d ", arr2[i]);
    }
    selectionSort(arr2, arrSize2);
    printf("\nSorted Array 2: ");
    for (int i = 0; i < arrSize2; i++)
    {
      printf("%d ", arr2[i]);
    }

    //Sorts 3rd Array
    printf("\nOriginal Array 3: ");
    for (int i = 0; i < arrSize3; i++)
    {
      printf("%d ", arr3[i]);
    }
    selectionSort(arr3, arrSize3);
    printf("\nSorted Array 3: ");
    for (int i = 0; i < arrSize3; i++)
    {
      printf("%d ", arr3[i]);
    }
    printf("\n");
    return 0;
}
