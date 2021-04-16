nome = input('\nInsirao seu nome: ')
senha = input('\nInsira a senha: ')

while senha == nome:
    print('\nSnha nao pode ser igual ao nome!')

    senha = input('\nInsira a senha: ')

print('\nCadastro feito com sucesso!!!\n')
