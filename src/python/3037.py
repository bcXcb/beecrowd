n = int(input())

for _ in range(n):
    pontuacao_total = distancia_total = 0
    
    # arremessos do joao
    for __ in range(3):
        pontuacao, distancia = map(int, input().split())
        pontuacao_total += pontuacao
        distancia_total += distancia
        
    pontuacao_do_joao = pontuacao_total * distancia_total
    distancia_total = pontuacao_total = 0
    
    # arremessos da maria
    for __ in range(3):
        pontuacao, distancia = map(int, input().split())
        pontuacao_total += pontuacao
        distancia_total += distancia
        
    pontuacao_da_maria = pontuacao_total * distancia_total
        
    if pontuacao_do_joao > pontuacao_da_maria:
        print('JOAO')
    if pontuacao_da_maria > pontuacao_do_joao:
        print('MARIA')