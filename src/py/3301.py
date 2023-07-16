h, z, l = map(int, input().split())

if (((h > z) and (h < l)) or ((h < z) and (h > l))):
	print('huguinho')

if (((z > h) and (z < l)) or ((z < h) and (z > l))):
	print('zezinho')

if (((l > h) and (l < z)) or ((l < h) and (l > z))):
	print('luisinho')
