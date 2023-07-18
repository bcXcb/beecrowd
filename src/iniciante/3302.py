n = int(input())
vet = []
for i in range(n):
    a = int(input())
    vet.append(a)
for i in range(n):
    print('resposta {}: {}'.format(i + 1, vet[i]))
