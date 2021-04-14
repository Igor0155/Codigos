salario = float(input('\nQuanto ganha por hora: '))
mes = int(input('\nhoras trabalhadas por mes: '))

salario_bruto = salario*mes

impos_rend = salario_bruto*0.11

inss = salario_bruto*0.08

sindicato = salario_bruto*0.05

salario_liquido = salario_bruto - impos_rend - inss - sindicato

print(f'\nSalario bruto e de {salario_bruto:.2f}')
print(f'\nImposto de renda bruto e de {impos_rend:.2f}')
print(f'\nINSS bruto e de {inss:.2f}')
print(f'\nSindicato e de {sindicato:.2f}')
print(f'\nSalario liquido e de {salario_liquido:.2f}\n')
