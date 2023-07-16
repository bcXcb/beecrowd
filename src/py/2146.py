while True:
    try:
        p = int(input(''))
        p -= 1
        print(p)
    except EOFError:
        break
