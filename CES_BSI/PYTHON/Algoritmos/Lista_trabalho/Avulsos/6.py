# Faça um programa que receba a temperatura média
# de cada mês do ano e armazene-as em uma lista.
# Em seguida, calcule a média anual das temperaturas
# e mostre a média calculada juntamente com todas as
# temperaturas acima da média anual, e em que mês
# elas ocorreram (mostrar o mês por extenso: 1 –
# Janeiro, 2 – Fevereiro, . . . ).

# pegando a entrada das temperaturas
def entrada_temp():
    lista = []
    temp = 0.0
    for i in range(12):
        temp = float(input(f"Insira a temp media do {i+1}º mês: "))
        lista.append(temp)

    return lista


# fazendo a media anual das temperaturas
def media(list):
    sum = media1 = 0.0

    for i in range(len(list)):
        sum += list[i]

    media1 = sum / 12

    return media1


# pegando a temperatura acima da media anual
def acima(list, media):
    mes = ['1 –Janeiro', '2 – Fevereiro', '3 – Março', '4 – Abril', '5 – Maio', '6 – Junho',
           '7 – Julho', '8 – Agosto', '9 – Setembro', '10 – Outubro', '11 – Novembro', '12 – Dezembro', ]
    print(f'Media anual: {round(media, 2)}')
    print("Temperaturas acima da media anual:")
    for i in range(len(list)):
        if list[i] > media:
            print(f"Mês: {mes[i]}, Temperatura: {round(list[i], 2)}")
#            acima_media.append(list[i])


# criando a lista
temp = entrada_temp()

# guardando a media
media1 = media(temp)

# pegando/ mostrando os resultados
acima(temp, media1)
