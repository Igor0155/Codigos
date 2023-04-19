"""
Esse programa coleta dados de uma cidade 
e faz a media do salario, filhos. E também 
pega o maior salario e o percentual de salario 
até R$100
"""

aux = 0
averageWage = 0.0
averageSons = 0
sumsalary = 0
sumSons = 0
count = 0
biggerWage = 0
perc = 0

while aux >= 0:

    # pegando o salario
    salary = float(input(f'Insira o salario do {count+1}º habitante: '))
    if salary >= 0:
        sumsalary += salary
    else:
        break

    # Pegando e Guardando o maior salario
    if biggerWage < salary:
        biggerWage = salary

    # fazendo o percentual
    if salary <= 100 and salary >= 0:
        perc += 1

    # Somando os filhos
    sons = int(input(f'Insira a qtd de filhos: '))
    sumSons += sons

    # verifcando se o salario é nulo no while
    aux = salary
    # Pegando a quantidade de loops
    count += 1


# calculando o percentual
sumPerc = ((perc / 100) * (count - 1)) * 100

# calculando a media
averageWage = sumsalary / (count - 1)
averageSons = sumSons / (count - 1)


print(f'A media dos salarios é: R${averageWage:,.2f}')
print(f'A media dos filhos é: {averageSons:.2f}')
print(f'O maior Salario é: {biggerWage:.2f}')
print(f'O percentual de Salarios até R$100 é: {sumPerc:.2f}%')
