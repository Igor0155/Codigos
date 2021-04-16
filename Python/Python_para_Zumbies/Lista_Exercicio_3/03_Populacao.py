A = 80000  # crescimento de 3%
B = 200000  # crescimento de 1.5%

aux = 0

while A <= B:
    A = A + A * 0.03
    B = B + B * 0.015

    aux += 1

print('\n', aux, ' Anos\n')
