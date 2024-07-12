fibonacciCache = {}


def fibonacci(num):
    global fibonacciCache

    if num in fibonacciCache:
        return fibonacciCache[num]

    if num == 1 or num == 2:
        fibonacciCache[num] = 1
        return 1
    else:
        result = fibonacci(num - 1)

        result = result + fibonacci(num - 2)

        fibonacciCache[num] = result
        return result


print(fibonacci(10))
