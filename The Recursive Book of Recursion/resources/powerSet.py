def getPowerSet(chars):
    if chars == '':
        return ['']

    powerSet = []
    head = chars[0]
    tail = chars[1:]

    tailPowerSet = getPowerSet(tail)

    for tailSet in tailPowerSet:
        powerSet.append(head + tailSet)

    powerSet = powerSet + tailPowerSet
    return powerSet


print(getPowerSet('ABC'))
