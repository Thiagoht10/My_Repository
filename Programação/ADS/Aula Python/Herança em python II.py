class ContaCorrente: #Classe pai ContaCorrente
    def __init__(self, nome):
        #atributos da clasee ContaCorrente
        self.nome = nome
        self.email = None
        self.telefone = None
        self._saldo = 0
    
    def _checar_saldo(self, valor): #Método checar_saldo, só pode ser instanciado passando o parâmetro valor.
        return self._saldo >= valor #Checa se saldo é maior ou igual ao parâmetro valor.
        
    def depositar(self, valor): #Método depositar, só pode ser instanciado passando o parâmetro valor.
        self._saldo += valor #Adiciona ao saldo o valor do parâmetro.
    
    def sacar(self, valor): #Método sacar, só pode ser instanciado passando o parâmetro valor.
        if self._checar_saldo(valor): #Invocamos o método checar_valor, pois o mesmo checa se o parâmetro é menor ou igual ao saldo.
            self._saldo -= valor #Desconta do atributo saldo o valor passado no parâmetro.
            return True #Retorna true para saque realizado, se atender as condições necessárias.
        else:
            return False#Retorna false se as condições para o saque não forem atendidas.

    def obter_saldo(self): #Método obter_saldo.
        return self._saldo #Retorna o atributo saldo.
    
class ContaPF(ContaCorrente): #Subclasse contaPF
    def __init__(self, nome, cpf): #Tem como parâmetro nome e cpf.
        super().__init__(nome) #O atributos herdados da superclasse.
        self.cpf = cpf #Criação de um atributo a subclasse.
    
    def solicitar_emprestimo(self, valor): #Método da subclasse solicitar_emprestimo.
        return self.obter_saldo() >= 500 #Retorna true se o parâmetro passado for maior ou igual ao atributo saldo invocado pelo método obter_saldo.
    
class ContaPJ(ContaCorrente): #Subclasse contaPJ
    def __init__(self, nome, cnpj): #Tem como parâmetro nome e cnpj.
        super().__init__(nome) #O atributos herdados da superclasse.
        self.cnpj = cnpj

    def sacar_emprestimo(self, valor): #Método da subclasse sacar_empréstimo
        return valor <= 5000 #Retorna true o valor for inferior à 5000.
    
conta_pf1 = ContaPF("João", '111.111.111-11') #Invocando o método e passando os parâmetros necessários
conta_pf1.depositar(1000) #método depositar herdado da superclasse
print('Saldo atual é', conta_pf1.obter_saldo())
print('Receberá empréstimo = ', conta_pf1.solicitar_emprestimo(2000))

conta_pf1.sacar(800) #método herdado da superclasse
print('Saldo atual é', conta_pf1.obter_saldo())
print('Receberá empréstimo = ', conta_pf1.solicitar_emprestimo(2000))

conta_pj1 = ContaPJ("Empresa A", "11.111.111/1111-11")
print('Saldo atual é', conta_pj1.obter_saldo())
print('Receberá empréstimo = ', conta_pj1.sacar_emprestimo(3000))