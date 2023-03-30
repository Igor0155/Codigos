ano = int(input('Insira o ano do modelo do carro: '))
peso = float(input('Insira o peso do carro: '))

if ano <= 1970:
    if peso < 1200:
        classe = 1
        taxa = 16.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')
    elif peso >= 1200 and peso <= 1700:
        classe = 2
        taxa = 22.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')
    elif peso > 1700:
        classe = 3
        taxa = 46.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')

elif ano >= 1971 and ano <= 1979:
    if peso < 1200:
        classe = 4
        taxa = 27.00
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')
    elif peso >= 1200 and peso <= 1700:
        classe = 5
        taxa = 30.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')
    elif peso > 1700:
        classe = 6
        taxa = 52.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')

elif ano >= 1980:
    if peso < 1600:
        classe = 7
        taxa = 19.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')       
    elif peso >= 1600: 
        classe = 8 
        taxa = 55.50
        print(f'A classe do modelo é {classe}, e a taxa de registro é: {taxa}')