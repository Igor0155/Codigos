from re import A


class Pessoa:
    def __init__(self, nome):
        self.nome = nome

    def getNome(self):
        return self.nome


class Aluno(Pessoa):
    def __init__(self, id, nome):
        Pessoa.__init__(self, nome)
        self.id = id


class Professor(Pessoa):
    def __init__(self, id, nome):
        Pessoa.__init__(self, nome)
        self.id = id
        
        def getNome(self):
            return self.nome


class Curso:
    def __init__(self, nome):
        self.nome = nome
        self.alunos = []
        self.turmas = []

    def getNome(self):
        return self.nome

    def matricular(self, aluno):
        self.alunos.append(aluno)

    def listarAlunos(self):
        for aluno in self.alunos:
            print(aluno.getNome())

    def verificarAluno(self, aluno):
        return aluno in self.alunos

    def removerAluno(self, aluno):
        self.alunos.remove(aluno)

    def criarTurma(self, turma):
        self.turmas.append(turma)

    def listarTurmas(self):
        for turma in self.turmas:
            print(turma.getNome())

    def verificarTurma(self, turma):
        return turma in self.turmas

    def removerTurma(self, turma):
        self.turmas.remove(turma)


class Turma:
    def __init__(self, nome):
        self.nome = nome
        self.alunos = []
        self.disciplinas = []
        self.professores = []

    def getNome(self):
        return self.nome

    def inserir(self, aluno):
        self.alunos.append(aluno)

    def listarAlunos(self):
        for aluno in self.alunos:
            print(aluno.getNome())

    def verificarAluno(self, aluno):
        return aluno in self.alunos
    
    # 
    def inserirProf(self, professor):
        self.professores.append(professor)

    def listarProfessores(self):
        for professor in self.professores:
            print(professor.getNome())

    def verificarProfessores(self, professor):
        return professor in self.professores

    def removerAluno(self, aluno):
        self.alunos.remove(aluno)

    def criarDisciplina(self, disciplina):
        self.disciplinas.append(disciplina)

    def listarDisciplinas(self):
        for disciplina in self.disciplinas:
            print(disciplina.getNome())
            # aqui em cima

    def verificarDisciplina(self, disciplina):
        return disciplina in self.disciplinas
        

    def removerDisciplina(self, disciplina):
        self.disciplinas.remove(disciplina)
        

class Disciplina:
    def __init__(self, id, nome):
        self.id = id
        self.nome = nome

    def getNome(self):
        return self.nome


# Definindo cursos
curso1 = Curso("Computacao")
curso2 = Curso("Arquitetura")
# Definindo alunos 
aluno1 = Aluno(0, "Ana")
aluno2 = Aluno(1, "Jose")
aluno3 = Aluno(2, "Maria")
# Definindo professores 
professor1 = Professor(0, "Marcus")
professor2 = Professor(0, "Lovisk")
# Definindo turmas 
turma1 = Turma("Turma A")
turma2 = Turma("Turma B")
# Definindo disciplinas 
disciplina1 = Disciplina(0, "Orientação a objetos")
disciplina2 = Disciplina(1, "Analise de sistemas")
# Adicionando aluno em um curso 
curso1.matricular(aluno1)
curso1.matricular(aluno2)
# Adicionando turma em um curso 
curso1.criarTurma(turma1)
curso1.criarTurma(turma2)
# adicionando alunos em uma turma 
turma1.inserir(aluno1)
turma1.inserir(aluno2)
# adicionando diciplinas em uma turma 
turma1.criarDisciplina(disciplina1)
turma1.criarDisciplina(disciplina2)
# Adicionando professor em uma turma
turma1.inserirProf(professor1)
turma1.inserirProf(professor2)



# 1) Quais o nome do professor de uma turma?
# print(turma1.verificarProfessores(professor1))
 
# 2) Quais os nomes de todos os alunos de uma turma?
# turma1.listarAlunos()

# 3) Quais os nomes dos professores que lecionam em alguma turma de um curso?
# turma1.listarProfessores()

# 4) Quais os nomes dos alunos que estão registrados em um curso?
# curso1.listarAlunos()

# 5) quais os nomes dos alunos que estão registrados em um curso?
# curso1.listarAlunos()

# 6) Quais as disciplinas que estão em alguma turma de curso?
# turma1.listarDisciplinas()

# 7) Verificar se um aluno está numa turma.
# print(turma1.verificarAluno(aluno1))

# 8) Verificar se um aluno está em algum curso.
# print(curso1.verificarAluno(aluno2))

# 9) Verificar se uma turma está em um curso.
# print(curso1.verificarTurma(turma2))

# 10) excluir um aluno de uma turma 
# turma1.removerAluno(aluno1)
# turma1.listarAlunos()

# 11) excluir uma turma de um curso
# curso1.removerTurma(turma1)
# curso1.listarTurmas()

# 12) excluir um aluno de um curso 
# curso1.removerAluno(aluno1)
# curso1.listarAlunos()



