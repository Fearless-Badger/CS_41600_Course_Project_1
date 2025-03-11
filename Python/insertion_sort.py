def insertion_sort(arr):
    """Sorts an array using the insertion sort algorithm."""
    
    for i in range(1, len(arr)):  
        key = arr[i]  
        j = i - 1  

        # Move elements of arr[0..i-1] that are greater than key
        # one position ahead of their current position
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]  
            j -= 1  

        arr[j + 1] = key  
if __name__ == "__main__":
    test_cases = [
        [5, 3, 8, 6, 2],         # Random order
        [1, 2, 3, 4, 5],         # Already sorted
        [5, 4, 3, 2, 1],         # Reverse order
        [10],                    # Single element
        [],                      # Empty list
        [4, 4, 4, 4]             # All elements the same
    ]

    for arr in test_cases:
        print("Original:", arr)
        insertion_sort(arr)  # Call sorting function
        print("Sorted:", arr)

