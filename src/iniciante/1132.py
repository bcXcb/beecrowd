s = 0

x = int(input(''))
y = int(input(''))

if (x > y):
    x = x + y
    y = x - y
    x = x - y

for i in range(x, y + 1):
    if (i >= 13):
        if (i % 13 != 0):
            s += i
            
print(s)
