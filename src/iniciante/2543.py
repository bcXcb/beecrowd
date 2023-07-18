try:
    while True:
        total = 0
        n, gameplayId = map(int, input().split())
        
        for _ in range(n):
            l, m = map(int, input().split())
            
            if l == gameplayId and m == 0:
                total += 1
        print(total)
except EOFError:
    pass
