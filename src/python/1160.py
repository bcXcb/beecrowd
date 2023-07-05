t = int(input())

for i in range(t):
    years = 0
    values = input().split(' ')
    pa, pb, g1, g2 = values
    pa = int(pa)
    pb = int(pb)
    g1 = float(g1)
    g2 = float(g2)
    
    g1 = g1 / 100
    g2 = g2 / 100

    while (True):
        pa = int(pa + (g1 * pa))
        pb = int(pb + (g2 * pb))
        years += 1
        
        if (years > 100 or pa > pb):
            break

    if (years > 100):
        print('Mais de 1 seculo.')
    else:
        print('{} anos.'.format(years))