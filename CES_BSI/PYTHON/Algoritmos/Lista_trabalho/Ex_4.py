def ler_matriz():
    matriz = []

    for i in range(3):
        linha = []
        for j in range(3):
            item = int(input(f"Digite o valor de A[{i+1}][{j+1}]: "))
            linha.append(item)
        matriz.append(linha)

    return matriz


def soma_matriz(matriz):
    soma = sum(matriz[0])
    return soma


def multiplicacao_seg_linha(matriz):
    multi = 1
    for item in matriz[1]:
        multi *= item
    return multi


def encontrar_maior_valor(matriz):
    maior = matriz[0][0]
    for linha in matriz:
        for i in linha:
            if i > maior:
                maior = i
    return maior


 # Ler a matriz
matriz = ler_matriz()

soma_primeira = soma_matriz(matriz)
print("A soma dos elementos da primeira linha é:", soma_primeira)

# Calcular e exibir a multiplicação dos elementos da segunda linha
multiplicacao_segunda = multiplicacao_seg_linha(matriz)
print("A multiplicação dos elementos da segunda linha é:", multiplicacao_segunda)


# Encontrar e exibir o maior valor da matriz
maior_valor = encontrar_maior_valor(matriz)
print("O maior valor da matriz é:", maior_valor)
