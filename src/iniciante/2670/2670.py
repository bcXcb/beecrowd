a = []
c = []

for _ in range(3):
    a.append(int(input()))
    
# máquina no primeiro andar
c.append((a[1] * 2) + (a[2] * 4))

# máquina no segundo andar
c.append((a[0] + a[2]) * 2)

# máquina no terceiro andar
c.append((a[0] * 4) + (a[1] * 2))

m = c[0]
for i in range(1, 3):
    if c[i] < m:
        m = c[i]
        
print(m)