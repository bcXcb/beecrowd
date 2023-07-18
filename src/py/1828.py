t = int(input())

for i in range(t):
    sr = input().split()
    s = sr[0]
    r = sr[1]
    
    # Sheldon victory
    sv1 = s=="pedra" and (r=="tesoura" or r=="lagarto")
    sv2 = s=="papel" and (r=="pedra" or r=="Spock")
    sv3 = s=="tesoura" and (r=="papel" or r=="lagarto")
    sv4 = s=="lagarto" and (r=="papel" or r=="Spock")
    sv5 = s=="Spock" and (r=="tesoura" or r=="pedra")
    # Raj victory
    rv1 = r=="pedra" and (s=="tesoura" or s=="lagarto")
    rv2 = r=="papel" and (s=="pedra" or s=="Spock")
    rv3 = r=="tesoura" and (s=="papel" or s=="lagarto")
    rv4 = r=="lagarto" and (s=="papel" or s=="Spock")
    rv5 = r=="Spock" and (s=="tesoura" or s=="pedra")
    
    if sv1 or sv2 or sv3 or sv4 or sv5:
        print(f'Caso #{i + 1}: Bazinga!')
    elif rv1 or rv2 or rv3 or rv4 or rv5:
        print(f'Caso #{i + 1}: Raj trapaceou!')
    else:
        print(f'Caso #{i + 1}: De novo!')