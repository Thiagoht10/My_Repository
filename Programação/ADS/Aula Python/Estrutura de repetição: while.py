#Estrutura de repetição while

numero = 1
while numero != 0: #Enquanto numero for diferente de 0
    numero = int(input("Digite um número: "))
    
    if numero % 2 == 0: #Resto da divisão por 2
        print("Número par!")
    else:
        print("Número ímpar!")