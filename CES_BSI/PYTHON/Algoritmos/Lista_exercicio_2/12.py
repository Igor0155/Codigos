tempo = float(input("Insira o tempo que o fundo está mantido no banco: "))

if tempo < 1: 
    juros = 0.55
    print(f'Juros: {juros}')

elif tempo >= 1 and tempo < 2:
    juros = 0.65
    print(f'Juros: {juros}')

elif tempo >= 2 and tempo < 3:
    juros = 0.75
    print(f'Juros: {juros}')

elif tempo >= 3 and tempo < 4:
    juros = 0.85
    print(f'Juros: {juros}')
    
elif tempo >= 4 and tempo <5:
    juros = 0.90
    print(f'Juros: {juros}')
    
elif tempo >= 5:
    juros = 0.95
    print(f'Juros: {juros}')

    

