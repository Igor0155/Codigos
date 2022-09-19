class Pessoa:
    def __init__(self, nome):
        self.nome = nome

    def getNome(self):
        return self.nome

    def setNome(self, nome):
        self.nome = nome

class Pofessor(Pessoa):

    def __init__(self, nome, titulacao):
        Pessoa.__init__(self, nome)
        self.titulacao1 = titulacao
        self.titulacao = self.titulacao1

    def getTitulacao(self):
        return self.titulacao

    def setTitulacao(self, titulacao):
        self.titulacao = titulacao

class Aluno(Pessoa):
    def __init__(self, nome, matricula, nota1, nota2):
        Pessoa.__init__(self, nome)
        self.matricula = matricula
        self.nota1 = nota1
        self.nota2 = nota2

    def getMatricula(self):
        return self.matricula

    def setMatricula(self, matricula):
        self.matricula = matricula

    def getNota1(self):
        return self.nota1

    def setNota1(self, nota1):
        self.nota1 = nota1

    def getNota2(self):
        return self.nota2

    def setNota2(self, nota2):
        self.nota2 = nota2

    def MediaNotas(self):
        media = (self.nota1 + self.nota2) / 2
        return media

class AlunoEnsinoMedio(Aluno):
    def __int__(self, nome, matricula):
        Aluno.__init__(nome, matricula)
       # self.situacao = situacao

    def getSituacao(self):
        if Aluno.MediaNotas > 6.0:
            return "Aprovado"
        else:
            "Reprovado"



teste = Aluno("teste", 999, 15, 15)
teste2 = AlunoEnsinoMedio("nome", 5555, 10, 10)

print(f"teste media {teste.MediaNotas()}")
print(f"teste situação {teste2.getSituacao()}")





