a, b, c = map(int, input().split())

if a > b and c >= b: print(':)')
if a < b and c <= b: print(':(')
if a < b and b < c: print(':(') if (c - b) < (b - a) else print(':)')
if a > b and b > c: print(':)') if (b - c) < (a - b) else print(':(')
if a == b: print(':)') if b < c else print(':(')