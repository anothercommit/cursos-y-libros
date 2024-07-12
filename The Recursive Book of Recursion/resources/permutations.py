def permutaciones(arr):
    if len(arr) == 1:
        return [arr]

    permutations = []
    head = arr[0]
    tail = arr[1:]
    tailPermutations = permutaciones(tail)
    for tailPerm in tailPermutations:
        for i in range(len(tailPerm) + 1):
            newPerm = [*tailPerm[0:i], head, *tailPerm[i:]]
            permutations.append(newPerm)
    return permutations


print(permutaciones([1, 2, 3]))
