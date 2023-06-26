# Função para ler a matriz 3x3
def ler_matriz():
    matriz = []
    for i in range(3):
        linha = []
        for j in range(3):
            elemento = int(input(f"Digite o valor para A[{i+1}][{j+1}]: "))
            linha.append(elemento)
        matriz.append(linha)
    return matriz

# Função para calcular a soma dos elementos da diagonal principal
def soma_diagonal_principal(matriz):
    soma = 0
    for i in range(3):
        soma += matriz[i][i]
    return soma

# Função para calcular a soma dos elementos da diagonal secundária
def soma_diagonal_secundaria(matriz):
    soma = 0
    for i in range(3):
        soma += matriz[i][2-i]
    return soma


# Ler a matriz
matriz = ler_matriz()

# Calcular e exibir a soma dos elementos da diagonal principal
soma_principal = soma_diagonal_principal(matriz)
print("A soma dos elementos da diagonal principal é:", soma_principal)

# Calcular e exibir a soma dos elementos da diagonal secundária
soma_secundaria = soma_diagonal_secundaria(matriz)
print("A soma dos elementos da diagonal secundária é:", soma_secundaria)

