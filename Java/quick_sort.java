/* Function to sort array using quick sort */
public class quick_sort
{
	// Quick Sort Function
	static void quickSort(int[] arr, int low, int high)
	{
		if (low < high)
		{
			int pi = partition(arr, low, high);
			quickSort(arr, low, pi - 1);
			quickSort(arr, pi + 1, high);
		}
	}

	// Partition Function
	static int partition(int[] arr, int low, int high)
	{
		int pivot = arr[high];
		int i = low - 1;

		for (int j = low; j < high; j++)
		{
			if (arr[j] < pivot)
			{
				i++;
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

		int temp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high] = temp;

		return i + 1;
	}

	// Array Printing Function
	static void printArray(int[] arr)
	{
		System.out.print("[");
		for (int i = 0; i < arr.length; i++)
		{
			System.out.print(arr[i]);
			if (i < arr.length - 1) System.out.print(", ");
		}
		System.out.println("]");
	}

	public static void main(String[] args)
	{
		int[] test1 = {10, 7, 8, 90, 1, 5};
		int[] test2 = {3, 60, 35, 2, 45, 320, 5};
		int[] test3 = {99, 44, 55, 22, 11, 66, 77};

		System.out.println("Test Case 1: Before Sorting");
		printArray(test1);
		quickSort(test1, 0, test1.length - 1);
		System.out.println("After Sorting:");
		printArray(test1);
		System.out.print("\n");

                System.out.println("Test Case 2: Before Sorting");
                printArray(test2);
                quickSort(test2, 0, test2.length - 1);
                System.out.println("After Sorting:");
                printArray(test2);
		System.out.print("\n");

                System.out.println("Test Case 3: Before Sorting");
                printArray(test3);
                quickSort(test3, 0, test3.length - 1);
                System.out.println("After Sorting:");
                printArray(test3);
		System.out.print("\n");
	}
}
// No more merge conflicts (2nd example)!
