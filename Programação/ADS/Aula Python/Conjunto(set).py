#Um conjunto pode ser construído abrindo-se chaves e passando um valor iterável.
#Ou usando o construtor set().

vogais_1 = {'aeiou'} # sem uso do construtor
print(type(vogais_1), vogais_1)

vogais_2 = set('aeiouaaaaaa') # construtor com string
print(type(vogais_2), vogais_2)

vogais_3 = set(['a', 'e', 'i', 'o', 'u']) # construtor com lista
print(type(vogais_3), vogais_3)

vogais_4 = set(('a', 'e', 'i', 'o', 'u')) # construtor com tupla
print(type(vogais_4), vogais_4)

print(set('banana'))

#O contrutor set elimina os itens repetidos.