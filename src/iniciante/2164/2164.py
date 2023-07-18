import math
n = int(input(''))
sqrt = math.sqrt(5)
fibonacci = ((((1 + sqrt) / 2) ** n) - (((1 - sqrt) / 2) ** n)) / sqrt
print('{:.1f}'.format(fibonacci))