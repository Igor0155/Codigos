aux = 0
averageWage = 0.0
averageSons = 0
sumWage = 0
sumSons = 0
count = 0
biggerWage = 0
perc = 0

while aux >= 0:
    
    # pegando o salario
    wage = float(input(f'Insira o salario do {count+1}º habitante: '))
    if wage >= 0:
        sumWage += wage
    else:
        break
    
    # Pegando e Guardando o maior salario
    if biggerWage < wage:
        biggerWage = wage
        
    # fazendo o percentual 
    if wage <= 100 and wage >=0:
        perc += 1
        

    # Somando os filhos
    sons = int(input(f'Insira a qtd de filhos: '))
    sumSons += sons

    # verifcando se o salario é nulo no while
    aux = wage
    # Pegando a quantidade de loops
    count += 1


# calculando a media
averageWage = sumWage / (count-1)
averageSons = sumSons / (count - 1)


print(f'A media dos salarios é: R${averageWage:,.2f}')
print(f'A media dos filhos é: {averageSons:.2f}')
print(f'O maior Salario é: {biggerWage:.2f}')
