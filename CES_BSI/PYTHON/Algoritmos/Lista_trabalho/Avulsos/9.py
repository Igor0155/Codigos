

def resp():
    nota1 = nota2 = nota3 = nota4 = nota5 = nota6 = []
    aux = 1
    resps = 0

    print("\nInsira valores de 1 a 6 | 0 - sair")
    while aux != 0:
        print('\nQual o melhor Sistema Operacional para uso em servidores?')
        print("1 - Windows XP 2 - Unix 3 - Linux 4 - Netware 5 - Mac OS 6 - Outro")
        resps = int(input(": "))
        if resps == 1:
            nota1.append(resps)
        elif resps == 2:
            nota2.append(resps)
        elif resps == 3:
            nota3.append(resps)
        elif resps == 4:
            nota4.append(resps)
        elif resps == 5:
            nota5.append(resps)
        elif resps == 6:
            nota6.append(resps)
        else:
            aux = 0


resp()
