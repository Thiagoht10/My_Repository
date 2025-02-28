#Declaração das variáveis
a= 2
b= 0.5
c= 1

x= input("Digite o valor de X: ") #Todo input guarda uma string sempre
x= float(x) #Aqui é feito a transformação de String para um Float

y = a * x ** 2 + b * x + c #Equação do segundo grau para treino

print(f"O resultado de y para x = {x} é {y}")