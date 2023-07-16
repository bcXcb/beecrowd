valor_antigo, valor_novo = map(float, input().split())
porcentagem_de_aumento = (valor_novo * 100 / valor_antigo) - 100
print('{:.2f}%'.format(porcentagem_de_aumento))