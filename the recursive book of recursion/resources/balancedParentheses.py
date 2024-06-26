def getBalancedParens(pairs, openRem=None, closeRem=None, current=''):
    if openRem is None:
        openRem = pairs
    if closeRem is None:
        closeRem = pairs

    if openRem == 0 and closeRem == 0:
        return [current]

    results = []
    if openRem > 0:
        results.extend(getBalancedParens(
            pairs, openRem - 1, closeRem, current + '(',))
    if closeRem > openRem:
        results.extend(getBalancedParens(
            pairs, openRem, closeRem - 1, current + ')',))

    return results


print(getBalancedParens(2))
