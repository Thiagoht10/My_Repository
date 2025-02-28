import pandas as pd

pd.Series(data=5)

lista_nomes= 'Howard Ian Peter Jonah Kellie'.split()

pd.Series(lista_nomes) #Cria uma série com uma lista de nomes.
print(pd.Series(lista_nomes),'\n')

dados= {
    'nome1': 'Howard',
    'nome2': 'Ian',
    'nome3': 'Peter',
    'nome4': 'Jonah',
    'nome5': 'Kellie'    
}

pd.Series(dados) #Cria uma série com um dicionário.
print(pd.Series(dados),'\n')

cpfs= '111.111.111-11 222.222.222-22 333.333.333-33 444.444.444-44 555.555.555-55'.split()

pd.Series(lista_nomes, index= cpfs) #criamos rótulos para séries.
print(pd.Series(lista_nomes, index= cpfs),'\n')

serie_dados= pd.Series(lista_nomes, index=cpfs) #Colocamos o rótumo para as séries numa variável;
serie_dados.loc['333.333.333-33'] #Usamos o atributo loc para localizar o index entre chaves;
print(serie_dados.loc['333.333.333-33'],'\n') #print na tela