
i = 0
soma = 0

while i < 10:
    print('\nInsira o ', i+1, ' numero: ')
    num = int(input())
    soma = soma + num

    i = i + 1

media = soma / i

print(f'\nMedia: {media:.1f}')
