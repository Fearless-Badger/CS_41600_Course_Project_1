#include <stdio.h>

void bubbleSort(int arr[], int n)
{
   int i, j, temp;
   for (i = 0; i < n - 1; i++)
   {
     for (j = 0; j < n - i - 1; j++)
     {
       if (arr[j] > arr[j + 1])
       {
         // Swap arr[j] and arr[j+1]
         temp = arr[j];
         arr[j] = arr[j + 1];
         arr[j + 1] = temp;
       }
     }
   }
}

int main()
{ 
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int arr2[] = {21, 47, 83, 52, 299, 11, 46};
  int arr3[] = {200, 100, 400, 300, 700, 1000, 400};
  int i;

  //Sorts 1st array
  int arrSize = sizeof(arr) / sizeof(arr[0]);
  printf("Original Array 1: ");
  for (i=0; i < arrSize; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("Sorted Array 1: ");
  bubbleSort(arr, arrSize);
  for (i=0; i < arrSize; i++)
  {
    printf("%d ", arr[i]);
  }

  //Sorts 2nd array
  int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
  printf("Original Array 2: ");
  for (i=0; i < arr2Size; i++)
  {
    printf("%d ", arr2[i]);
  }
  printf("Sorted Array 2: ");
  bubbleSort(arr2, arr2Size);
  for (i=0; i < arr2Size; i++)
  {
    printf("%d ", arr2[i]);
  }

  //Sorts 3rd array
  int arr3Size = sizeof(arr3) / sizeof(arr3[0]);
  printf("Original Array 3: ");
  for (i=0; i < arr3Size; i++)
  {
    printf("%d ", arr3[i]);
  }
  printf("Sorted Array 3: ");
  bubbleSort(arr3, arr3Size);
  for (i=0; i < arr3Size; i++)
  {
    printf("%d ", arr3[i]);
  }
  return 0;
}
