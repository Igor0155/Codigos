dia = int(input('\nInsira a quantidade de  dias: '))
hora = float(input('\nInsira a quantidade de  horas: '))
minutos = int(input('\nInsira a quantidade de  minutos: '))
segundos = int(input('\nInsira a quantidade de  Segundos: '))

total_second = (dia * 86400) + (hora * 3600) + (minutos * 60) + segundos

print('\nO total de Segundos de: ', dia, f'D {hora:.0f}h', minutos,
      'min', segundos, f'seg sao: {total_second:.0f} Segundos\n\n')
