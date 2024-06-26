def mergeSort(elements):
    if len(elements) == 0 or len(elements) == 1:
        return elements

    middle = len(elements) // 2
    left = mergeSort(elements[:middle])
    right = mergeSort(elements[middle:])

    result = []
    i, j = 0, 0
    while (len(result) < len(elements)):
        if left[i] < right[j]:
            result.append(left[i])
            i+= 1
        else:
            result.append(right[j])
            j+= 1
        if i == len(left) or j == len(right):
            result.extend(left[i:] or right[j:])
            break

    return result

print(mergeSort([3,4,5,1,2,8,3,7,6]))