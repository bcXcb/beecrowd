e = True

n = int(input())
a = int(input())
n -= 1

for _ in range(n):
    v = int(input())
    if a < v:
        e = False
        
if e:
    print('S')
else:
    print('N')