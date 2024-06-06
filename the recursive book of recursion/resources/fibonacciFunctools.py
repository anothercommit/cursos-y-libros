import functools


@functools.lru_cache()
def fibonacci(num):
    if num == 1 or num == 2:
        return 1
    else:
        result = fibonacci(num - 1)

        result = result + fibonacci(num - 2)

        return result


print(fibonacci(99))
