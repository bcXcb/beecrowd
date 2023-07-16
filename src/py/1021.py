v = float(input())
valor = round(v * 100)  # Converter para centavos e arredondar para o valor mais próximo

b = [0] * 6
c = [0] * 6

# Notas
b[0] = valor // 10000
valor %= 10000
b[1] = valor // 5000
valor %= 5000
b[2] = valor // 2000
valor %= 2000
b[3] = valor // 1000
valor %= 1000
b[4] = valor // 500
valor %= 500
b[5] = valor // 200
valor %= 200

# Moedas
c[0] = valor // 100
valor %= 100
c[1] = valor // 50
valor %= 50
c[2] = valor // 25
valor %= 25
c[3] = valor // 10
valor %= 10
c[4] = valor // 5
valor %= 5
c[5] = valor

print("NOTAS:")
print(f"{b[0]} nota(s) de R$ 100.00")
print(f"{b[1]} nota(s) de R$ 50.00")
print(f"{b[2]} nota(s) de R$ 20.00")
print(f"{b[3]} nota(s) de R$ 10.00")
print(f"{b[4]} nota(s) de R$ 5.00")
print(f"{b[5]} nota(s) de R$ 2.00")
print("MOEDAS:")
print(f"{c[0]} moeda(s) de R$ 1.00")
print(f"{c[1]} moeda(s) de R$ 0.50")
print(f"{c[2]} moeda(s) de R$ 0.25")
print(f"{c[3]} moeda(s) de R$ 0.10")
print(f"{c[4]} moeda(s) de R$ 0.05")
print(f"{c[5]} moeda(s) de R$ 0.01")