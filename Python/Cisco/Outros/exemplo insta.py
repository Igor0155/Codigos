class cao:
    def andar(self):
        return "andando"
    def latir(self):
        return "AuAu"
class PitBull(cao):
    def latir (self):
        return "Arff"

toto = PitBull()
print(toto.latir())

    
