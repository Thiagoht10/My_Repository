class Pessoa: #classe pessoa.
    
    def __init__(self):
        #atributos a classe pessoas.
        self.cpf = None 
        self.nome = None
        self.endereco = None

class Funcionario(Pessoa): #subclasse funcionário da classe pessoa.
    
    def __init__(self):
        #Atributos da subclasse
        self.matricula = None 
        self.salacio = None
    
    def bater_ponto(self): #método da subclasse funcionário
        # código aqui
        pass
    
    def fazer_login(self): #método da subclasse funcionário
        # código aqui
        pass

class Cliente(Pessoa):
    
    def __init__(self):
        #Atributos da subclasse cliente
        self.codigo = None
        self.dataCadastro = None
    
    def fazer_compra(self): #método da subclasse cliente
        # código aqui
        pass
    
    def pagar_conta(self):
        # código aqui
        pass

f1 = Funcionario() #Instanciando a subclasse funcionário
f1.nome = "Milena miranda de almeida" #Herdando o atributo nome da classe pai.
print(f1.nome)

c1 = Cliente()
c1.cpf = "111.111.111-11" #Herdando o atributo CPF da classe pai.
print(c1.cpf)