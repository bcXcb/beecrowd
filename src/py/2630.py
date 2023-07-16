id_do_caso = 1
casos_de_teste = int(input())

for _ in range(casos_de_teste):
    tipo_de_conversao = input()
    r, g, b = map(int, input().split())
    
    if tipo_de_conversao == 'min':
        min = r
        
        if (g < min):
            min = g
        if (b < min):
            min = b
        
        nivel_de_cinza = min
    elif tipo_de_conversao == 'max':
        max = r
        
        if (g > max):
            max = g
        if (b > max):
            max = b
        
        nivel_de_cinza = max
    elif tipo_de_conversao == 'mean':
        nivel_de_cinza = (r + g + b) // 3
    else:
        nivel_de_cinza = int((0.3 * r) + (0.59 * g) + (0.11 * b))
    
    print(f"Caso #{id_do_caso}: {nivel_de_cinza}")
    
    id_do_caso += 1