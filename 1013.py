import math
x = input().split(' ')
a, b, c = x
a = int(a)
b = int(b)
c = int(c)
m = ((a + b) + abs(a - b)) // 2
m = ((m + c) + abs(m - c)) // 2
print('{} eh o maior'.format(str(m)))
