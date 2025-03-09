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
