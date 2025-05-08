def sumDivConq(numbers):
    if len(numbers) == 0:
        return 0
    elif len(numbers) == 1:
        return numbers[0]
    else:
        mid = len(numbers) // 2
        left = sumDivConq(numbers[0:mid])
        right = sumDivConq(numbers[mid:len(numbers)])
        return left + right


nums = [1, 2, 3, 4, 5]
print('The sum of', nums, 'is', sumDivConq(nums))
