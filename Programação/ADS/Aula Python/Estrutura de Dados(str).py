texto= "Aprendendo Python na disciplina linguagem de programação"

print(f"Tamanho do texto= {len(texto)}") #Mostra o tamanho do texto
print(f"Python no texto= {'Python' in texto}")  #Retorna se a palavra "Python" se encontra na variável texto
print(f"Quantidade de Y no texto= {texto.count('y')}") #Quantidade de ocorrência na variável texto
print(f"A palavra na posição 10:17= {texto[10:17]}") #Acessa o valor da posição 10 à 17.

textoII= "Aprendendo Python na disciplina linguagem de programação"

print(texto.upper()) #Transforma em letra maiúscula
print(texto.replace('i', 'XX')) #Substitui um caracter por outro

palavra= texto.split() #Quebra uma string numa lista, separando pelo parâmetro adicionado
print(f"Palavras = {palavra}") #Mostra a string da variável palavra
print(f"Tamanho: {len(palavra)}") #Mostra o tamanho da variável palavra