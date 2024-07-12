def getCombos(arr, k):
    if k == 0:
        return ['']
    elif arr == []:
        return []

    combinations = []
    head = arr[0]
    tail = arr[1:]
    tailCombos = getCombos(tail, k - 1)
    for tailCombo in tailCombos:
        combinations.append([head, *tailCombo])

    combinations.extend(getCombos(tail, k))

    return combinations


print(getCombos([1, 2, 3], 2))
