#Uma única chave em um dicionário pode estar associada a vários valores por meio de uma lista, tupla ou até mesmo outro dicionário. Nesse caso, também conseguimos acessar os elementos internos. No código a seguir, a função keys() retorna uma lista com todas as chaves de um dicionário. A função values() retorna uma lista com todos os valores. A função items() retorna uma lista de tuplas, cada uma das quais é um par chave-valor.

cadastro = {
            'nome' : ['João', 'Ana', 'Pedro', 'Marcela'],
            'cidade' : ['São Paulo', 'São Paulo', 'Rio de Janeiro', 'Curitiba'],
            'idade' : [25, 33, 37, 18]
            }

print("len(cadastro) = ", len(cadastro))

print("\n cadastro.keys() = \n", cadastro.keys()) #Retorna uma lista das chaves de um dicionário
print("\n cadastro.values() = \n", cadastro.values()) #Retorna uma lista dos valores de um dicionário
print("\n cadastro.items() = \n", cadastro.items()) #retorna uma lista de tuplas, cada uma das quais é composta pela chave e pelo valor.

print("\n cadastro['nome'] = ", cadastro['nome']) #Acessa o valor atribuído a chave nome, no caso uma lista de nomes.
print("\n cadastro['nome'][2] = ", cadastro['nome'][2]) #Acessa o valor 2 da chave nome.
print("\n cadastro['idade'][2:] = ", cadastro['idade'][2:]) #acessa os valores da posição 2 até o final da lista atribuída à chave 'nome'.