def quick_sort(arr):
    if len(arr)<2:
        return arr
    
    pivot = arr[0]

    less = [i for i in arr[1:] if i <= pivot]
    greater = [i for i in arr[1:] if i > pivot]
    return quick_sort(less) + [pivot] + quick_sort(greater)

if __name__ == "__main__":
    arr = [12, 11, 13, 5, 6, 7]
    n = len(arr)
    print()
    print(f"\nStarting array : {arr}")

    new_arr = quick_sort(arr)

    print(f"Sorted array   : {new_arr}\n")

    arr2 = [1, 7, 4, 1, 10, 9, -2]
    n = len(arr2)
    print()
    print(f"\nStarting array : {arr2}")

    new_arr2 = quick_sort(arr2)

    print(f"Sorted array   : {new_arr2}\n")