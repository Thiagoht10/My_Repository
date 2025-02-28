#Estrutura logica

falta= int(input("Digite a quantidade de faltas: ")) #Comano de input mais transformação
nota= float(input("Digite a nota da prova: "))

if falta <= 5 and nota >= 7: #Se FALTA for menor ou igual à 5 e NOTA for maior ou igual a 7
    print("Aluno aprovado!")

else:
    print("Aluno reprovado!")