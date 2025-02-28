#Declaração de variável
x = 10 
nome = 'aluno'
nota = 8.75
fez_inscricao = True

#Monstrando na tela o tipo de variável
print(type(x))  #print(type()) mostra o tipo de variável declarada
print(type(nome))
print(type(nota))
print(type(fez_inscricao))

#Inserindo dado digitado à uma variavel
nome= input("Digite seu nome: ") #input() inseri os dados digitados a variável
print(nome)

#Formas de mostrar uma string contida na variável
print("Olá %s, bem-vindo ao seu primeiro Hello Word!" % (nome))

print("Olá {}, bem-vindo ao seu primeiro Hello Word!".format(nome))

print(f"Olá {nome}, bem-vindo ao seu primeiro Hello Word!") #Criação de string com interpolação. Considerado a melhor opção.