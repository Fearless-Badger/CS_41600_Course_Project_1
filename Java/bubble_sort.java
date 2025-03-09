import java.util.Arrays;

public class bubble_sort
{
	// Bubble Sorting Method
	public static void bubble_sort(int[] arr)
	{
		int n = arr.length;
		boolean swapped;

		// Outer Loop for passes
		for (int i = 0; i < n; i++)
		{
			swapped = false;

			// Inner Loop for comparisons
			for (int j = 0; j < n - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
					swapped = true;
				}
			}
			// If no swaps were made, the array is already sorted.
			if (!swapped) break;
		}
	}

	// Main method for testing
	public static void main(String[] args)
	{
		int [] data = {64, 34, 25, 12, 22, 11, 90}; //Change these values for other tests.

		System.out.println("Unsorted array: " + Arrays.toString(data));
		bubble_sort(data);
		System.out.println("Sorted Array: " + Arrays.toString(data));
	}
}
