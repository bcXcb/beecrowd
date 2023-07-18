musicas = [
    "PROXYCITY",
    "P.Y.N.G.",
    "DNSUEY!",
    "SERVERS",
    "HOST!",
    "CRIPTONIZE",
    "OFFLINE DAY",
    "SALT",
    "ANSWER!",
    "RAR?",
    "WIFI ANTENNAS"
]

c = int(input())

for _ in range(c):
    a, b = map(int, input().split())
    
    indice = a + b
    
    print(musicas[indice])