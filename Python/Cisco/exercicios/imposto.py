
#este programa calcula o imposto de determinado salario

renda = float(input('\nInsira o valor do seu salario: '))
imposto =0

#Verificando o estado
if renda <= 85528:
    imposto = (renda*0.18) - 556.2

elif renda > 85525:
    imposto = 14839.2 +( 0.32*(renda - 85528))

#zerando a variavel se o imposto for negativo
if imposto <= 0:
    imposto = 0

#printanfdo e arredondando o imposto
imposto = round(imposto,0)
print('\nThe tax is:',imposto,'thalers\n\n')