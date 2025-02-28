import pandas as pd

dados= {
    'Nomes': 'Camila João Maria Milena Thiago'.split(),
    'CPFs': '111.111.111-11 222.222.222-22 333.333.333-33 444.444.444-44 555.555.555-55'.split(),
    'Emails': 'camila.barros@gmail.com joao.guilherme@gmail.com maria.luiza@gmail.com milena.miranda@gmail.com thiago.souza@gmail.com'.split(),
    'Idades': [32,26,56,25,26]
}

df_dados = pd.DataFrame(dados) #Cria um dataframe e o coloca na variável;

df_coluna_idade= df_dados['Idades'] #seleciona a coluna idades do dataframe;
print(df_coluna_idade,'\n')

print('Média das idades= ', df_coluna_idade.mean(),'\n') #Calcula a média das idades;
print(type(df_coluna_idade),'\n')
print(df_coluna_idade, '\n')

colunas= ['Nomes', 'CPFs']
df_colunas= df_dados[colunas]
print(type(df_colunas),'\n')
print(df_colunas)