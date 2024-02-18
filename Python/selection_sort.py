def selectionSort(array, size):
    for i in range(size):
        min_idx = i
        for j in range(i+1, size):
            if array[j] < array[min_idx]:
                min_idx = j
        array[i], array[min_idx] = array[min_idx], array[i]


data = [-2, 45, 0, 11, -9]
size = len(data)
selectionSort(data, size)
print("Sorted array in ascending order : ", data)
