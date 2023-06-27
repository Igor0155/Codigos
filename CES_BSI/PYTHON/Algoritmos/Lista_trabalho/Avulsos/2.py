# Ler uma lista de 10 números reais e
# mostre-os na ordem inversa.

def pegar_num():
    lista = []
    num = 0
    for i in range(10):
        num = int(input(f"Insira o {i+1}º Número: "))
        lista.append(num)
    return lista


lista = pegar_num()
lista.reverse()
for i in range(len(lista)):
    print(f": {i} -> {lista[i]}")
