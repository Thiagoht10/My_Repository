vogais= ['a', 'e', 'i', 'o', 'u']

for x in vogais:
    print(f"Posição= {vogais.index(x)}, valor= {x}") #index() retorna a posição de um valor numa sequência

#Mesmo resultado construído de forma diferente

vogaisII= []

print(f"\nTipo do objeto= {type(vogaisII)}")

vogaisII.append('a') #Adiciona valor à última posição
vogaisII.append('e')
vogaisII.append('i')
vogaisII.append('o')
vogaisII.append('u')

for p, x in enumerate(vogaisII): #A variável p guarda o valor da função enumerate() e x guarda o valor
    print(f"Posição= {p}, valor= {x}")


#Mais listas

frutas= ['maça', 'banana', 'uva','kiwi', 'jaca']
notas= [2.5, 6, 8, 10, 5]

print("maça" in frutas) #Retorna true ou false se maça contém na lista
print("caju" in frutas)
print("kiwi" not in frutas)
print(min(frutas)) #O mínimo de uma lista de palavras é feito sobre a ordem alfabética
print(max(notas)) #Retorna o valor máximo da lista
print(frutas.count("maça")) #Conta quantas elementos tem na lista
print(frutas + notas) #Concatena os valores da lista
print(2* frutas) #Multiplica por dois os valores da lista