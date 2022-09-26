class Pessoa:
    
    def __init__(self, nome):
        self.nome = nome

    def getNome(self):
        return self.nome

    def setNome(self, nome):
        self.nome = nome


class PessoaFisica(Pessoa):

    def __init__(self, nome, cpf):
        Pessoa.__init__(self, nome)
        self.cpf = cpf

    def getCpf(self):
        return self.cpf

    def setCpf(self, cpf):
        self.cpf = cpf


class Cliente(PessoaFisica):

    def __init__(self, nome, cpf, limiteCredito):
        PessoaFisica.__init__(self, nome, cpf)
        self.limiteCredito = limiteCredito

    def getLimiteCredito(self):
        return self.limiteCredito

    def setLimiteCredito(self, limiteCredito):
        self.limiteCredito = limiteCredito

        
class PessoaJuridica(Pessoa):
    
    def __init__(self, nome, cnpj):
        Pessoa.__init__(self, nome)
        self.cnpj = cnpj
        
    def getCnpj(self):
        return self.cnpj
        
    def setCnpj(self, cnpj):
        self.cnpj = cnpj
        
class Fornecedor(PessoaJuridica):
    def __init__(self, nome, cnpj, representante):
        PessoaJuridica.__init__(self, nome, cnpj)
        self.representante = representante
        
    def getRepresentante(self):
        return self.representante
    
    def setRepresentante(self, representate):
        self.representante = representate 



# nome = input("Digite um nome: ")
# cpf = input("Digite um cpf: ")
# limiteCredito = input("Digite um limite de credito: ")

# cliente = Cliente(nome, cpf, limiteCredito)

#CLIENTE ___
cliente = Cliente("Ana", 123, 1000)
print(f"Nome = {cliente.getNome()}")
print(f"CPF = {cliente.getCpf()}")
print(f"Limite de credito = {cliente.getLimiteCredito()}\n")

#FORNECEDOR__

fornecedor = Fornecedor("nome", 99999, "teste")

print(f"Nome = {fornecedor.getNome()}")
print(f"cnpj = {fornecedor.getCnpj()}")
print(f"representante = {fornecedor.getRepresentante()}")