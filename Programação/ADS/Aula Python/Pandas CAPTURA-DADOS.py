import pandas as pd
from datetime import date

df_selic= pd.read_json("https://api.bcb.gov.br/dados/serie/bcdata.sgs.11/dados?formato=json") #Leitura aquivo json

df_selic.drop_duplicates(keep= "last", inplace= True) #Remoção de dados duplicados. keep mantém o último registro e inplace= true salva a mudança no dataframe.
print(df_selic.info())

########################################################################################################################
#date.today()
print('\n\n\ndate.today()\n')
data_extracao= date.today()

df_selic['data_extracao']= data_extracao #Criação de novas colunas
df_selic['responsavel']= "Autora"

print(df_selic.info())
print(df_selic.head())

########################################################################################################################
#to_datetime()
print('\n\n\nto_datetime()\n')
df_selic['data']= pd.to_datetime(df_selic['data'], dayfirst= True)
df_selic['data_extracao']= df_selic['data_extracao']. astype('datetime64[ns]')
#Transformando a colina data no tipo datetime do pandas. dayfirst= true, informa que o dia vem primeiro antes para transformar em a/m/d.
#Tranforma a data que já está no formato correto em datatime do pandas, usando o astype() e informano o tipo do dado.

print(df_selic.info())
print(df_selic.head())

#######################################################################################################################
#str.upper()
print('\n\n\nstr.upper()\n')
df_selic['responsavel']= df_selic['responsavel'].str.upper()
#Quando selecionamos uma coluna temos uma Serie. Usamos o recurso str e apliucamos o método upper() para transformar em maiúsculo.
print(df_selic.head())


########################################################################################################################
#sort_value
print('\n\n\nsort_values()\n')
df_selic.sort_values(by= 'data', ascending= False, inplace= True)
print(df_selic.head())
#A função utilizada é "sort_values()" do Pandas, que é usada para ordenar os valores em um DataFrame com base nos valores de uma ou mais colunas. Os parâmetros utilizados são:

#"by='data'": Indica que a coluna 'data' será usada como referência para a ordenação. 'data' é o nome da coluna pelo qual o DataFrame será ordenado.
#"ascending=False": Indica que a ordenação será feita em ordem decrescente. Ou seja, os valores mais recentes na coluna 'data' aparecerão primeiro no resultado ordenado. Se "ascending" estiver definido como True (padrão), a ordenação será feita em ordem crescente.
#"inplace=True": Indica que a alteração será feita diretamente no objeto "df_selic", ou seja, o DataFrame original será modificado.

########################################################################################################################
#reset_index
print('\n\n\nreset_index()\n')
df_selic.reset_index(drop= True, inplace= True)
#Em resumo, o código acima redefine o índice do DataFrame "df_selic" e remove o índice anterior, substituindo-o por um novo índice sequencial. Essa operação é realizada diretamente no objeto "df_selic".
print(df_selic.head())


########################################################################################################################
#set_index
print('\n\n\nset_index()\n')
lista_novo_index= [f'selic_{indice}' for indice in df_selic.index]
print(lista_novo_index[:5])

df_selic.set_index(keys=[lista_novo_index], inplace= True)
print(df_selic.head())
#Primeiro, é criada uma nova lista chamada "lista_novo_index" usando uma list comprehension. A expressão "f'selic_{indice}'" cria uma string formatada em que o valor do índice de "df_selic" é concatenado com o prefixo "selic_". Ou seja, para cada índice no DataFrame "df_selic", é criada uma nova string na forma "selic_0", "selic_1", "selic_2" e assim por diante. Essas strings são armazenadas na lista "lista_novo_index".

#Em seguida, a função "set_index()" do Pandas é usada para definir um novo índice para o DataFrame "df_selic". O parâmetro "keys" recebe a lista "lista_novo_index" como valor, indicando que essa lista será usada como o novo índice do DataFrame. O parâmetro "inplace=True" indica que a alteração será feita diretamente no objeto "df_selic", ou seja, o DataFrame original será modificado.

#Por fim, é exibido o cabeçalho do DataFrame "df_selic" usando a função "head()", que retorna as primeiras linhas do DataFrame atualizado. Agora o DataFrame "df_selic" possui um novo índice definido com os valores da lista "lista_novo_index".



#########################################################################################################################
#idxmin() idxmax()
print('\n\n\nidxmin() idxmax()\n')
print(df_selic['valor'].idxmin())
print(df_selic['valor'].idxmax())

#As funções utilizadas são "idxmin()" e "idxmax()" do Pandas, que são usadas para encontrar o índice (rótulo da linha) correspondente ao valor mínimo e valor máximo, respectivamente, em uma coluna de um DataFrame.

#"df_selic['valor'].idxmin()": Retorna o índice do valor mínimo na coluna 'valor' do DataFrame "df_selic". A expressão "df_selic['valor']" seleciona a coluna 'valor' do DataFrame "df_selic", e "idxmin()" é chamada nessa coluna para encontrar o índice correspondente ao valor mínimo nessa coluna.

#"df_selic['valor'].idxmax()": Retorna o índice do valor máximo na coluna 'valor' do DataFrame "df_selic". A expressão "df_selic['valor']" seleciona a coluna 'valor' do DataFrame "df_selic", e "idxmax()" é chamada nessa coluna para encontrar o índice correspondente ao valor máximo nessa coluna.


#########################################################################################################################
#loc
print('\n\n\nloc[]\n')
print(df_selic.loc['selic_0'])

print(df_selic.loc[['selic_0','selic_3']])

print(df_selic.loc[:'selic_3'])

print(df_selic.loc[['selic_0','selic_3']][['valor', 'data']])

print(df_selic.iloc[:5])

#"df_selic.loc['selic_0']": Retorna a linha com o rótulo 'selic_0' no DataFrame "df_selic". A função "loc[]" é usada para acessar uma linha pelo seu rótulo. Nesse caso, a linha com rótulo 'selic_0' é retornada como uma série.

#"df_selic.loc[['selic_0','selic_3']]": Retorna as linhas com rótulos 'selic_0' e 'selic_3' no DataFrame "df_selic". Os rótulos são passados em uma lista para a função "loc[]", que retorna um novo DataFrame contendo essas linhas.

#"df_selic.loc[:'selic_3']": Retorna todas as linhas desde o início do DataFrame até a linha com rótulo 'selic_3' no DataFrame "df_selic". A função "loc[]" é usada com uma fatia (slice) para acessar um intervalo de linhas pelo seu rótulo.

#"df_selic.loc[['selic_0','selic_3']][['valor', 'data']]": Retorna as linhas com rótulos 'selic_0' e 'selic_3', e apenas as colunas 'valor' e 'data', no DataFrame "df_selic". As linhas são acessadas usando a função "loc[]" com uma lista de rótulos de linhas, e as colunas são acessadas usando outra lista de rótulos de colunas encadeada após a primeira chamada de "loc[]".

#"df_selic.iloc[:5]": Retorna as primeiras 5 linhas do DataFrame "df_selic". A função "iloc[]" é usada para acessar linhas pelo seu índice numérico (posição). Nesse caso, um intervalo de índices é passado como uma fatia (slice) para acessar as primeiras 5 linhas do DataFrame.

#########################################################################################################################
#Teste 1
print('\n\n\nTeste 1\n')

teste1= df_selic['valor'] < 0.06
print(type(teste1))
print(teste1[:5])

#########################################################################################################################
#Teste 2
print('\n\n\nTeste 2\n')

teste2= df_selic['data'] >= pd.to_datetime('2020-01-01')
print(type(teste2))
print(teste2[:5])

#"df_selic['data']": Seleciona a coluna 'data' do DataFrame "df_selic".

#"pd.to_datetime('2020-01-01')": Converte a string '2020-01-01' em um objeto do tipo datetime usando a função "to_datetime()" do Pandas. Isso é feito para criar um objeto de data que pode ser comparado com os valores da coluna 'data' do DataFrame.

#"df_selic['data'] >= pd.to_datetime('2020-01-01')": Cria uma série booleana que contém o resultado da comparação elemento a elemento entre os valores da coluna 'data' do DataFrame "df_selic" e a data '2020-01-01'. Cada elemento da série booleana será "True" se o valor da coluna 'data' for maior ou igual à data '2020-01-01', caso contrário será "False".

#"print(type(teste2))": Imprime o tipo de dado da série booleana "teste2", que é uma instância da classe "pandas.core.series.Series".

#"print(teste2[:5])": Imprime os primeiros 5 elementos da série booleana "teste2", que corresponderão aos primeiros 5 valores da coluna 'data' do DataFrame "df_selic" em relação à condição de data '2020-01-01'. Esses elementos serão "True" ou "False", dependendo se a data é maior ou igual a '2020-01-01' ou não.

###########################################################################################################################
#Teste 3 / Teste 4
print('\n\n\nTeste 3 / Teste 4\n')

teste3= (df_selic['valor'] <= 0.01) & (df_selic['data'] >= pd.to_datetime('2020-01-01'))

teste4= (df_selic['valor'] <= 0.01) | (df_selic['data'] >= pd.to_datetime('2020-01-01'))


print("Resultado do AND:\n")
print(teste3[:3])

print("Resultado do OR:\n")
print(teste4[:3])


############################################################################################################################
#Filtro
print('\n\n\nFiltro\n')

data1= pd.to_datetime('2020-01-01')
data2= pd.to_datetime('2020-01-31')

filtro_janeiro_2020= (df_selic['data'] >= data1) & (df_selic['data'] <= data2)

df_janeiro_2020= df_selic.loc[filtro_janeiro_2020]
print(df_janeiro_2020.head())