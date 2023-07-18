a = 0
b = 0
n = int(input())

for i in range(n):
    i_eh_par = i % 2 == 0
    
    for j in range(n):
        j_eh_par = j % 2 == 0
        
        if (i_eh_par):
            if (j_eh_par):
                a += 1
            else:
                b += 1
        else:
            if (j_eh_par):
                b += 1
            else:
                a += 1

print('{} casas brancas e {} casas pretas'.format(a, b))