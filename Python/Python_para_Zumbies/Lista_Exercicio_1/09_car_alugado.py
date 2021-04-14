km = float(input('\nInsira a quantidade de quilometros rodados: '))
dias = float(input('\nInsira a quantidade de dias que esta com o carro: '))

total = (dias*60) + (km * 0.15)

print(f'\nO preço a pagar e de R${total:.2f}\n')
