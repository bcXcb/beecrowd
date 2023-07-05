m = int(input(''))
f = int(input(''))
g = int(input(''))

h = m - f - g;
    
if f > g and f > h:
    b = f
if g > f and g > h:
    b = g
if h > f and h > g:
    b = h

print(b)
