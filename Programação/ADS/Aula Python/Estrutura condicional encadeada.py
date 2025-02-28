#Estrutura consicional encadeada

print("Digite um valor para as opções abaixo:")
print("1. para pagamento em dinheiro à vista")
print("2. para pagamento no cartão de crédito")
print("3. para pagamento no cartão de débito")
print("4. para pagamento com cheque")

a= input()
a= int(a) #Conversão de String para Int

if a == 1:
    print("Você escolheu a opção à vista")

elif a == 2: #O mesmo que if e else
    print("Você escolheu a opção crédito")

elif a == 3:
    print("Você escolheu a opção débito")

elif a == 4:
    print("Você escolheu a opção cheque")

else: #Caso nenhum das opções sejam verdadeiras
    print("Opção inválida!")
    print("Tente uma das opções acima")