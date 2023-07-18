#lsta com capacidade para armazenar 2 valores
golpes = [2]

t = int(input())

for _ in range(t):
    b = int(input())
    
    for i in range(0, 2): # 0 a 1
        # três entradas em uma única linha, semelhante a "cin >> ai >> di >> li;"
        ai, di, li = map(int, input().split())
        
        golpe = (ai + di) / 2
        
        # verifica se o level do treinador é par
        if (li % 2 == 0): 
            golpe = golpe + b
            
        golpes.insert(i, golpe)
        
    if (golpes[0] > golpes[1]):
        print('Dabriel')
    elif (golpes[0] < golpes[1]):
        print('Guarte')
    else:
        print('Empate')