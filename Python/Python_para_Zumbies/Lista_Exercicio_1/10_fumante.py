cigarros = int(input('\nInsira  a quantidade de cigarros fumados por dia: '))
anos = float(input('\nA quantos anos?: '))

# 10min a cada cigarro

total = anos*365 * cigarros
dias = total / 144

print(f'\nVocê perdeu {dias:.1f} dias\n')
