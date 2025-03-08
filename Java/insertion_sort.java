/* Function to sort array using insertion sort */
public class insertion_sort {
    void sort(int arr[])
    {
        int n = arr.length;
        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    /* A utility function to print array of size n */
    static void printArray(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n; ++i)
            System.out.print(arr[i] + " ");

        System.out.println();
    }

    // Driver method
    public static void main(String args[])
    {
        int arr[] = { 12, 11, 13, 5, 6 };
	int arr2[] = { 10, 8, 6, 4, 2, 7 };
	int arr3[] = { 4, 12, 0, 21, 105, 17 };

        insertion_sort ob = new insertion_sort();

	System.out.print("Test case 1: ");
	printArray(arr);
	System.out.print("Sorted: ");
	ob.sort(arr);
	printArray(arr);
	System.out.println();

	System.out.print("Test case 2: ");
	printArray(arr2);
	System.out.print("Sorted: ");
	ob.sort(arr2);
	printArray(arr2);
	System.out.println();

	System.out.print("Test case 3: ");
	printArray(arr3);
	System.out.print("Sorted: ");
	ob.sort(arr3);
        printArray(arr3);
    }
}
