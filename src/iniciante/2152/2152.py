n = int(input())

for i in range(n):
    h, m, o = map(int, input().split())
    
    if (o == 1):
        if (h >= 10):
            if (m >= 10):
                print('{}:{} - A porta abriu!'.format(h, m))
            else:
                print('{}:0{} - A porta abriu!'.format(h, m))
        else:
            if (m >= 10):
                print('0{}:{} - A porta abriu!'.format(h, m))
            else:
                print('0{}:0{} - A porta abriu!'.format(h, m))
    else:
        if (h >= 10):
            if (m >= 10):
                print('{}:{} - A porta fechou!'.format(h, m))
            else:
                print('{}:0{} - A porta fechou!'.format(h, m))
        else:
            if (m >= 10):
                print('0{}:{} - A porta fechou!'.format(h, m))
            else:
                print('0{}:0{} - A porta fechou!'.format(h, m))