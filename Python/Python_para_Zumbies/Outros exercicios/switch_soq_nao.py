
def meu_switch(op):
    op = {
        0:"Op = 0",
        1:"Op = 1",
        2:"Op = 2",
    }
    return op.get(op,"Op invalida.")

if __name__ == "__main__":
    op = int(input("Informe um número de 0 a 2: "))
    print (meu_switch(op))  