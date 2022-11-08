
class Escolaridade:

    def __init__(self, descricao):
        self.descricao = descricao

    def getDescricao(self):
        return self.descricao


class Pessoa:

    def __init__(self, nome, escolaridade):
        self.nome = nome
        self.escolaridade = escolaridade

    def getEscolaridade(self):
        return self.escolaridade

    def getNaturalidadeCidade(self):
        return self.naturalidade.getNome()
    
    def getNaturalidadeEstado(self):
        return self.naturalidade.getEstado()
    
    def getNome(self):
        return self.nome


class Aluno(Pessoa):
    
    def __init__(self,nome, escolaridade):
        Pessoa.__init__(self,nome, escolaridade)
    
    def getdescricao(self):
        return self.escolaridade.getDrescricao()

    def getEscola(self):
        self.escola

    def getEstadoEscola(self):
        self.escola.getEstado()

    def getCidadeEscola(self):
        self.escola.getCidade()

    def getCurso(self):
        self.curso

    def getCoordenadorCurso(self):
        self.curso.getCoordenador()




class Professor(Pessoa):

    def __init__(self, escolaridade):
        Pessoa.__init__(self, escolaridade)

    def getEscolaridade(self):
        self.escolaridade.getDrescricao()

    def getCurso(self):
        self.curso.getNome()

    def getNivelCurso(self):
        self.curso.getNivelEscolaridade()

    def getDiretor(self):
        self.curso.getDiretor()

    def getCoordenador(self):
        self.curso.getCoordenador()


class Curso:

    def __init__(self, nome):
        self.nome = nome

    def getNome(self):
        self.nome

    def getCoordenador(self):
        self.coordenador.getNome()

    def getEscolaridadeCoordenador(self):
        self.coordenador.getEscolaridade()

    def getNivelEscolaridade(self):
        self.escolaridade.getDrescricao()

    def getEscola(self):
        self.escola1.getNome()

    def getDiretor(self):
        self.escola1.getDiretor()


class Escola:

    def __init__(self,nome):
        self.nome = nome

    def getEscolaridadeDiretor(self):
        self.diretor.getEscolaridade()

    def getCidade(self):
        self.cidade.getNome()

    def getEstado(self):
        self.cidade.getEstado()

    def getNome(self):
        self.nome

    def getDiretor(self):
        self.diretor.getNome()

class Cidade:

    def __init__(self, nome, estado):
        self.nome = nome
        self.estado = estado

    def getNome(self):
        self.nome

    def getEstado(self):
        self.estado.getNome()

class Estado:

    def __init__(self, nome):
        self.nome = nome

    def getNome(self):
        self.nome

escolaridade = Escolaridade("Nivel superior")
professor = Professor("Marcus",escolaridade)
print(professor.getEscolaridade())

curso = Curso('Sistemas')
curso.getCoordenador(professor)
print(curso.getEscolaridadeCoordenador())

escola = Escola("Normal")
escola.setDiretor(professor)
print(escola.getEscolaridadeDiretor())

estado = Estado("Minas Gerais")
cidade = Cidade("Juiz de Fora",estado)
aluno = Aluno("Arthur Morgan",escolaridade)
aluno.setNaturalidadeCidade(cidade)
print(aluno.getNaturalidadeEstado())

professor.setNaturalidadeCidade(cidade)
print(professor.getNaturalidadeCidade())

escola.setCidade(cidade)
aluno.setEscola(escola)
print(aluno.getEstadoEscola())

curso.setEscolaridade(escolaridade)
professor.setCurso(curso)
print(professor.getNivelCurso())

aluno.setCurso(curso)
print(aluno.getCoordenadorCurso())
