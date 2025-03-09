// Java program for Merge Sort

class merge_sort {
  
    // Merges two subarrays of a[]
    void merge(int a[], int l, int m, int r)
    {

          int n1 = m - l + 1;
        int n2 = r - m;

        int L[] = new int[n1];
        int R[] = new int[n2];

        for (int i = 0; i < n1; ++i)
            L[i] = a[l + i];

          for (int j = 0; j < n2; ++j)
            R[j] = a[m + 1 + j];

        // Merge the temp arrays
        // Initial indexes of first and second subarrays
        int i = 0, j = 0;

        int k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                a[k] = L[i];
                i++;
            }
            else {
                a[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            a[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            a[k] = R[j];
            j++;
            k++;
        }
    }

    // Main function that sorts a[l..r] using
    // merge()
    void sort(int a[], int l, int r)
    {
        if (l < r) {
          
            int m = (l + r) / 2;

            // Sort first and second halves
            sort(a, l, m);
            sort(a, m + 1, r);

            // Merge the sorted halves
            merge(a, l, m, r);
        }
    }

    // Driver method
    public static void main(String args[])
    {
        int a[] = { 12, 11, 13, 5, 6, 7 };
	int a2[] = { 100, 23, 1237, 6, 10, 1};
	int a3[] = { 0, 4, 3, 9, 1, 10, 10 };

        // Calling of Merge Sort for array 1
        merge_sort ob = new merge_sort();

	System.out.print("Test case 1: ");
	for(int i = 0; i < a.length; ++i)
                System.out.print(a[i] + " ");

	System.out.print("\nSorted: ");
	ob.sort(a, 0, a.length - 1);
        for (int i = 0; i < a.length; ++i)
            System.out.print(a[i] + " ");
	System.out.println();

	// Print array 2
	System.out.print("\nTest case 2: ");
        for(int i = 0; i < a2.length; ++i)
                System.out.print(a2[i] + " ");

        System.out.print("\nSorted: ");
        ob.sort(a2, 0, a2.length - 1);
        for (int i = 0; i < a2.length; ++i)
            System.out.print(a2[i] + " ");
        System.out.println();

	// Print array 3
	System.out.print("\nTest case 3: ");
        for(int i = 0; i < a3.length; ++i)
                System.out.print(a3[i] + " ");

        System.out.print("\nSorted: ");
        ob.sort(a3, 0, a3.length - 1);
        for (int i = 0; i < a3.length; ++i)
            System.out.print(a3[i] + " ");
        System.out.println();

    }
}
// Updated class names
