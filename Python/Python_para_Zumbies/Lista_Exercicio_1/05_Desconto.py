produto = float(input('\nInsira o preço do produto: '))
desconto = float(input('\nInsira o desconto: '))

calculo = produto * desconto/100
novo = produto - calculo

print(f'\nDesconto: R$ {calculo:.2f}')
print(f'\nPreço a pagar: R$ {novo:.2f}\n')
