values = input().split(' ')

hi, mi, hf, mf = values

hi = int(hi)
mi = int(mi)
hf = int(hf)
mf = int(mf)
    
if (hf > hi):
    if (mf == mi):
        hd = hf - hi
        md = 0
    elif (mf > mi):
        hd = hf - hi
        md = mf - mi
    else:
        if (hf - hi == 1):
            hd = 0
            md = 69 - mi
        else:
            hd = hf - hi - 1
            md = 70 - mi
elif (hf < hi):
    mmi = hi * 60 + mi
    mmf = hf * 60 + mf
    mmm = (24 * 60) - mmi + mmf
    md = mmm % 60
    hd = mmm // 60
else:
    if (mf > mi):
        hd = 0
        md = mf - mi
    elif (mf < mi):
        hd = 23
        md = 60 - (mi - mf)
    else:
        hd = 24
        md = 0
    
print('O JOGO DUROU {} HORA(S) E {} MINUTO(S)'.format(hd, md))