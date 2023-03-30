# Faça um algoritmo que receba o valor do salário de uma pessoa e o valor de um
# financiamento pretendido. Caso o financiamento seja menor ou igual a 5 vezes o
# salário da pessoa, o algoritmo deverá escrever "Financiamento Concedido"; senão,
# ele deverá escrever "Financiamento Negado"

salario = float(input("Insira o valor do salario do cliente: "))
finan = float(input("Insira o valor do financiamento: "))

aprova = (salario * 5) 

if finan <= aprova:
    print("Financiamento Concedido.")

else:
    print("Financiamento Negado") 