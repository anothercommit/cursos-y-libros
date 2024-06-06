def binarySearchIterative(needle, haystack, left=None, right=None):
    if left is None:
        left = 0
    if right is None:
        right = len(haystack) - 1

    while True:
        if left > right:
            return None 

        mid = (left + right) // 2
        if needle == haystack[mid]:
            return mid
        elif needle < haystack[mid]:
            right = mid - 1
        elif needle > haystack[mid]:
            left = mid + 1

print(binarySearchIterative(13, [1, 4, 8, 11, 13, 16, 19, 19]))
