# Ler uma lista com 4 notas, em seguida
# o programa deve exibir as notas e a
# média.

# func para pegar as notas
def notas():
    lista = []
    nota = 0.0

    for i in range(4):
        nota = float(input(f"Insira a {i+1}º Nota: "))
        lista.append(nota)

    return lista


# func para realizar as medias das notas
def media(lista):
    aux = 0
    aux2 = 0
    for i in range(len(lista)):
        aux += lista[i]
        aux2 += 1

    media = aux / aux2
    return media


# mostrando o resultado
def mostrar(lista, media):
    for i in range(len(lista)):
        print(f"{i+1}º Nota: {lista[i]}")
    print(f"Media: {media}")


# definindo a lista
lista1 = notas()

# pegando a media
media_sum = media(lista1)

# chamando a func
mostrar(lista1, media_sum)
