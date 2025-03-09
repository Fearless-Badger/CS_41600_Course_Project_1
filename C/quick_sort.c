#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr1[] = { 4, 2, 5, 3, 1 };
    int arrSize1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4178, 29, 39, 384, 0};
    int arrSize2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[] = {29, 489, 91, 19, 349, 10, 489};
    int arrSize3 = sizeof(arr3) / sizeof(arr3[0]);
    //Sorts 1st Array
    printf("Original Array 1: ");
    for (int i = 0; i < arrSize1; i++)
    {
	printf("%d ", arr1[i]);
    }
    qsort(arr1, arrSize1, sizeof(int), compare);
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
    qsort(arr2, arrSize2, sizeof(int), compare);
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
    qsort(arr3, arrSize3, sizeof(int), compare);
    printf("\nSorted Array 3: ");
    for (int i = 0; i < arrSize3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}
