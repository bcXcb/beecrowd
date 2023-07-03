ANO_BASE = 2015
n = int(input())

for _ in range(n):
    ano = int(input())
    anos_transcorridos = abs(ano - ANO_BASE)
    
    if (ano >= ANO_BASE):
        anos_transcorridos += 1
        print(F'{anos_transcorridos} A.C.')
    else:
        print(F'{anos_transcorridos} D.C.')