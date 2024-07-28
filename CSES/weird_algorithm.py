def weird_algorithm(n: int) -> int:
    print(n)

    while n != 1:
        n = n // 2 if n % 2 == 0 else n * 3 + 1
        print(n)


weird_algorithm(int(input()))
