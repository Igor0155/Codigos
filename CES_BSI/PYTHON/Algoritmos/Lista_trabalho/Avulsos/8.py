# Utilizando listas faça um programa que faça 5 perguntas para uma
# pessoa sobre um crime. As perguntas são:
# • "Telefonou para a vítima?"
# • "Esteve no local do crime?"
# • "Mora perto da vítima?"
# • “Tinha dívidas com a vítima?"
# • "Já trabalhou com a vítima?“
# O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder
# positivamente a 2 questões ela deve ser classificada como
# "Suspeita“; entre 3 e 4 como "Cúmplice" e; 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".

def perguntas():
    
    perg = ['Telefonou para a vítima?', 'Esteve no local do crime?',
            'Mora perto da vítima?', 'Tinha dívidas com a vítima?', 'Já trabalhou com a vítima?']
    resp = 0
    print("Digite 1 - Sim | 0 = Não")
    for i in range(len(perg)):
        print(f'{perg[i]}')
        resp += int(input(": "))
        
    return resp

def classif(resp):
    if resp == 2:
        print('Você é Suspeito')
    elif resp >= 3 and resp <= 4:
        print('Você é Cúmplice')
    elif resp == 5:
        print('Você é o Assassino')
    else:
        print('Você é Inocente')
        
resp = perguntas()

classif(resp)
