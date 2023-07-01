n = int(input())
m = int(input())
compradas = []

x = int(input())
compradas.insert(0, x)
faltam = n - 1

for _ in range(m - 1):
    x = int(input())
    nao_igual = True
    
    for i in range(len(compradas)):
        if (x == compradas[i]):
            nao_igual = False
            break
        
    if (nao_igual):
        faltam -= 1
        compradas.append(x)

print(faltam)