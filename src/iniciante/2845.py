n = int(input())
a = input().split()

for x in range(n):
    a[x] = int(a[x])
    
a.sort()
m = int(a[n - 1]) + 1

while True:
    for x in range(n):
        if (m % a[x]) == 0 and a[x] != 1:
            m += 1
            break
        
    if x == n-1:
        break
print(m)