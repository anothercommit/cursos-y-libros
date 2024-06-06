def quicksort(items, left=0, right=None):
    if right is None:
        right = len(items) - 1 

    if right <= left:
        return items

    i = left 
    pivotValue = items[right] 

    for j in range(left, right):
        if items[j] <= pivotValue:
            items[i], items[j] = items[j], items[i]
            i += 1

    items[i], items[right] = items[right], items[i]

    quicksort(items, left, i - 1)
    quicksort(items, i + 1, right) 
    
    return items

print(quicksort([0, 7, 6, 3, 1, 2, 5, 4]))
