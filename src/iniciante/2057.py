s, t, f = map(int, input().split())

td = s + t + f;

if (td > 24):
    td = td - 24

if (td < 0):
    td = 24 - abs(td)

print(td)