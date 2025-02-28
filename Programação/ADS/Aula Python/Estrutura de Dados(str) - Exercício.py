texto = """Operadores de String
Python oferece operadores para processar texto (ou seja, valores de string).
Assim como os números, as strings podem ser comparadas usando operadores de comparação:
==, !=, <, > e assim por diante.
O operador ==, por exemplo, retorna True se as strings nos dois lados do operador tiverem o mesmo valor (Perkovic, p. 23, 2016).
"""

print(f"Tamanho do texto= {len(texto)}") #Mostra a quantidade de caracteres
texto= texto.lower() #Transforma em minúsculo
texto= texto.replace("," , "").replace("." , "").replace("(" , "").replace(")" , "").replace("\n" , "") #Substitui caracteres
listas_palavras= texto.split() #Quebra caracteres em listas
print(f"Tamanho da lista de palavras= {len(listas_palavras)}")

total= listas_palavras.count("string") + listas_palavras.count("strings") #Soma a quantidade da contagem feita pela função count()

print(f"Quantidade de vezes que a palavra string ou strings aparecem= {total}")