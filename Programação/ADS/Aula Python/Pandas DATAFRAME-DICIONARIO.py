import pandas as pd

dados= {
    'Nomes': 'Camila João Maria Milena Thiago'.split(),
    'CPFs': '111.111.111-11 222.222.222-22 333.333.333-33 444.444.444-44 555.555.555-55'.split(),
    'Emails': 'camila.barros@gmail.com joao.guilherme@gmail.com maria.luiza@gmail.com milena.miranda@gmail.com thiago.souza@gmail.com'.split(),
    'Idades': [32,26,56,25,26]
}

df_dados = pd.DataFrame(dados) #Cria um dataframe e o coloca na variável;
print(df_dados)

print('\n Informações do DataFrame\n')

print(df_dados.info(),'\n\n') #Retorna a informação do dataframe;

print('Quantidades de linhas e colunas= ', df_dados.shape,'\n') #Retorna a quantidade de linhas e colunas respectivamente;
print('Tipo de dados= ', df_dados.dtypes,'\n') #Retorna o tipo de dados do dataframe;

print('Menor valor= \n', df_dados.min(),'\n') #Retorna o menor valor de cada coluna;
print('Maior valor= \n', df_dados.max(),'\n') #Retorna o maior valor de cada coluna;

print('Resumo: \n', df_dados.describe(),'\n') #Exibe o resumo;

print('5 primeiros registros=\n ', df_dados.head()) #Exibe os cinco primeiro regitros do dataframe;