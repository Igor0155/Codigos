secret_number = 666

aux =1

# aspas triplas """ imprimi textos em varias linhas
print("""
+================================+
| Welcome to my game, muggle!    |
| Enter an integer number        |
| and guess what number I've     |
| picked for you.                |
| So, what is the secret number? |
+================================+
""")

#loop
while aux != 666:
    num = int(input('num?: '))
    
    #se num for igual ao numero sectreto o programa se encerra
    if num == secret_number:
        print ('\nWell done, muggle! You are free now.\n')
    
    #senao fica em loop
    else:
        print("\nHa ha! You're stuck in my loop!\n")
    
    aux = num


