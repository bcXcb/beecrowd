n = int(input(''))

for i in range(n):
    s = 0
    x = 1
    
    t = int(input(''))
    
    for j in range(t):
        s += x
        x *= -1
    
    print(s)
