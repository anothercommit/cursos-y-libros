subset = []

def search(k, n):
    if (k == n) :
        print()

    search(k+1, n)
    subset.push(k)
    search(k+1, n)
    subset.pop()

