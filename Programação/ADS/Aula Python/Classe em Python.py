class Calculadora: #Aqui criamos uma classe chamada calculadora.

    #Criamos métodos dentro da classe
    
    def somar(self, n1, n2):  #Método somar
        return n1 + n2

    def subtrair(self, n1, n2): #Método subtrair
        return n1 - n2

    def multiplicar(self, n1, n2): #Método multiplicar
        return n1 * n2

    def dividir(self, n1, n2): #Método dividir
        return n1 / n2
    
    def dividir_resto(self, n1, n2): #Método resto da divisão
        return n1 % n2
    #O parâmetro self são métodos da instância da classe.

calc = Calculadora() #Instanciamos um objeto do tipo claculadora

#Aqui acessamos seus métodos
print('Soma:', calc.somar(4, 3))
print('Subtração:', calc.subtrair(13, 7))
print('Multiplicação:', calc.multiplicar(2, 4))
print('Divisão:', calc.dividir(16, 5))
print('Resto da divisão:', calc.dividir_resto(7, 3))