n = int(input())
h = [int(x) for x in input().split()]

pico = 1

if n == 2 and h[0] == h[1]:
    pico = 0
else:
    for i in range(1, n - 1):
        if not ((h[i] < h[i - 1] and h[i] < h[i + 1]) or (h[i] > h[i - 1] and h[i] > h[i + 1])):
            pico = 0
            break
print(pico)