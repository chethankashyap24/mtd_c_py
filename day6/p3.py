def partition(arr):
    n = len(arr)
    k = 0
    pivot = arr[n - 1]  # Choosing the last element as the pivot

    for i in range(n - 1):  # Loop through the array except the last element
        if arr[i] <= pivot:
            arr[i], arr[k] = arr[k], arr[i]  # Swap elements
            k += 1

    arr[k], arr[n - 1] = arr[n - 1], arr[k]  # Swap pivot to its correct position
    return k  # Return the pivot index

# Example usage:
arr = [3, 8, 2, 5, 1, 4, 7, 6]
pivot_index = partition(arr)
print("Partitioned array:", arr)
print("Pivot index:", pivot_index)
