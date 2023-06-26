 # Função para ler a matriz 3x2
def ler_matriz():
    matriz = []
    for i in range(3):
        linha = []
        for j in range(2):
            elemento = int(input(f"Digite o valor para A[{i+1}][{j+1}]: "))
            linha.append(elemento)
        matriz.append(linha)
    return matriz

# Função para calcular a matriz transposta
def matriz_transposta(matriz):
    transposta = []
    for j in range(2):
        coluna = []
        for i in range(3):
            coluna.append(matriz[i][j])
        transposta.append(coluna)
    return transposta

# Função para exibir a matriz
def exibir_matriz(matriz):
    for linha in matriz:
        for elemento in linha:
            print(elemento, end=" ")
        print()

# Ler a matriz A[3x2]
matriz_A = ler_matriz()

# Calcular a matriz transposta B[2x3]
matriz_B = matriz_transposta(matriz_A)

# Exibir a matriz B
print("A matriz transposta B[2x3] é:")
exibir_matriz(matriz_B)