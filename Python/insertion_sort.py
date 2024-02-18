def insertionSort(array):
    for i in range(1, len(array)):
        key = array[i]
        j = i-1
        while j >= 0 and key < array[j]:
            array[j+1] = array[j]
            j = j-1
        array[j+1] = key


data = [74, 14, 13, 42, 7]
insertionSort(data)
print('Sorted array in ascending order : ')
print(data)
