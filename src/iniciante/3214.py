efc = input().split()

e = int(efc[0])
f = int(efc[1])
c = int(efc[2])

posse = e + f
comprou = posse // c
sobrou = posse - (comprou * c)
tomou = comprou

while posse >= c:
    posse = comprou + sobrou
    comprou = posse // c
    sobrou = posse - (comprou * c)
    tomou += comprou

print(tomou)
