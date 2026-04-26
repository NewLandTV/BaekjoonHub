n = list(map(int, input().split()))

def IsNaturalNumber(number):
    return number > 0

print(len(list(filter(IsNaturalNumber, n))))