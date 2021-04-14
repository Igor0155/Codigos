metros = int(input('\nInforme quantos m²: '))

if metros % 54 == 0:
    latas = metros / 54
else:
    latas = int(metros/54) + 1

valor = latas * 80
print(f'\n {latas} latas')
print(f'\nTotal: R$ {valor:.2f}\n')
