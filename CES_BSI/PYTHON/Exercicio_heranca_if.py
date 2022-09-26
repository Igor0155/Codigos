from msilib.schema import Class

class Pessoa:
    def __init__(self, nome):
        self.nome = nome

    def getNome(self):
        return self.nome

    def setNome(self, nome):
        self.nome = nome

class Professor(Pessoa):

    def __init__(self, nome, titulacao):
        Pessoa.__init__(self, nome)
        self.titulacao = titulacao

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

class AlunoEnsinoMedio(Aluno):
    def Media(self):
        media = (self.nota1 + self.nota2) / 2
        if media < 6:
            return "Reprovado"
        else:
            return "Aprovado"

class AlunoGraduacao(Aluno):
    def Media(self):
        media = (self.nota1 + self.nota2) / 2
        if media < 7:
            return "Reprovado"
        else:
            return "Aprovado"

nome = input("Insira o nome do aluno: ")
matricula = input(f"Insira a matricula de registro do aluno {nome}: ")
nota1 = float(input("Agora insira \n1ª nota: "))
nota2 = float(input("2ª nota: "))
ensino = int(input("Digite < 1 > - Ensino Médio ou < 2 > - Graduação: "))
professor = input("Insira o nome do professor: ")
titulo = input(f"Insira a titulação do professor {professor}: ")

prof = Professor(professor, titulo)

if ensino == 1:
    ensinoM = AlunoEnsinoMedio(nome, matricula, nota1, nota2)
    print(f"\nAluno: {ensinoM.getNome()}")
    print(f"Matricula: {ensinoM.getMatricula()}")
    print(f"Foi {ensinoM.Media()}")
    print(
        f"Pelo professor: {prof.getNome()} de titulação: {prof.getTitulacao()}")

elif ensino == 2:
    ensinoG = AlunoGraduacao(nome, matricula, nota1, nota2)
    print(f"\nAluno: {ensinoG.getNome()}")
    print(f"Matricula: {ensinoG.getMatricula()}")
    print(f"Foi {ensinoG.Media()}")
    print(
        f"Pelo professor: {prof.getNome()} de titulação: {prof.getTitulacao()}")
else:
    print(f"Opção {ensino} NÃO E VALIDA!!!")
