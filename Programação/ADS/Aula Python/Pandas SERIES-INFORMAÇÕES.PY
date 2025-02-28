import pandas as pd

series_dados= pd.Series([10.2, -1, None, 15, 23.4])

print('Quantidades de linhas= ', series_dados.shape) #Retorna uma tupla com o número de linhas;
print('Tipo dados= ', series_dados.dtypes) #Retorna o tipo de dados, se for misto retorna object;
print('Os valores são único? ', series_dados.is_unique) #Verifica de os dados dão únicos(sem duplicações);
print('Existem valores nulos? ', series_dados.hasnans) #Verifica se existem valores nulos;
print('Quantos valores existem? ', series_dados.count(),'\n') #Conta quantos valores existem(exlcui os nulos);

print('Qual é o menor valor? ', series_dados.min()) #Extrai o menor valor da serie (nesse caso os dados devem ser do mesmo tipo);
print('Qual é o maior valor? ', series_dados.max()) #Extrai o maior valor da serie, nas mesmas conições do mínimo;
print('Qual é a média aritmética? ', series_dados.mean()) #Extrai a média aritmética da série numérica;
print('Qual é o disvio padrão? ', series_dados.std()) #Extrai o desvio padrão de uma serie numérica;
print('Qual é a mediana? ', series_dados.median(),'\n') #Extrai a mediana de uma serie numérica;

print('resumo= \n', series_dados.describe()) #Exibe o resumo sobre os dados da serie;