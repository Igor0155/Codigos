salario = float(input('\nInsira o valor do seu salario: '))
porcent_aumento = int(input('\nInsira a porcentagem do valor em decimal: '))

reajuste = salario * (porcent_aumento/100)
novo_salario = salario + reajuste

print(f'\nO valor do aumento e de R${reajuste:.2f}')
print(f'\nO valor do novo salario e de R${novo_salario:.2f}\n')
