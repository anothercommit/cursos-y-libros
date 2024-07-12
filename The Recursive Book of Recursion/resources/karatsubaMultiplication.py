import math

MULT_TABLE = {}
for i in range(10):
    for j in range(10):
        MULT_TABLE[(i, j)] = i * j


def addZeros(numberString, numZeros, insertSide):
    """Return a string padded with zeros on the left or right side."""
    if insertSide == 'left':
        return '0' * numZeros + numberString
    elif insertSide == 'right':
        return numberString + '0' * numZeros


def karatsuba(x, y):
    """Multiply two integers with the Karatsuba algorithm. Note that
    the * operator isn't used anywhere in this function."""
    assert isinstance(x, int), 'x must be an integer'
    assert isinstance(y, int), 'y must be an integer'
    x = str(x)
    y = str(y)

    if len(x) == 1 and len(y) == 1:
        return MULT_TABLE[(int(x), int(y))]

    if len(x) < len(y):
        x = addZeros(x, len(y) - len(x), 'left')
    elif len(y) < len(x):
        y = addZeros(y, len(x) - len(y), 'left')

    half = math.floor(len(x) / 2)

    a = int(x[:half])
    b = int(x[half:])
    c = int(y[:half])
    d = int(y[half:])

    step1Result = karatsuba(a, c)
    step2Result = karatsuba(b, d)
    step3Result = karatsuba(a + b, c + d)

    step4Result = step3Result - step2Result - step1Result

    step1Padding = (len(x) - half) + (len(x) - half)
    step1PaddedNum = int(addZeros(str(step1Result), step1Padding, 'right'))

    step4Padding = (len(x) - half)
    step4PaddedNum = int(addZeros(str(step4Result), step4Padding, 'right'))

    return step1PaddedNum + step2Result + step4PaddedNum


n1 = 15
n2 = 15
print(n1, '*', n2, '=', karatsuba(n1, n2))
