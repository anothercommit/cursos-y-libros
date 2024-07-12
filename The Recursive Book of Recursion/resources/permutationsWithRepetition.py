def getPermsWithRep(chars, permLength=None, prefix=''):
    if permLength is None:
        permLength = len(chars)

    if (permLength == 0):
        return [prefix]

    results = []
    for char in chars:
        newPrefix = prefix + char

        results.extend(getPermsWithRep(chars, permLength - 1, newPrefix))
    return results


print(getPermsWithRep('ab', 2))
