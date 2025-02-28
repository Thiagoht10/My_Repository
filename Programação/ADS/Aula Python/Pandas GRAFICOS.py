import pandas as pd

dados= {
    'turma': ['A','B','C'],
    'qtde_alunos': [33,50,45]
}

df= pd.DataFrame(dados)

print(df)

#Criação de gráfico com o método plot através de um Dataframe

df.plot(x= 'turma', y= 'qtde_alunos', kind='bar') #Gráfico tipo barra

df.plot(x= 'turma', y= 'qtde_alunos', kind= 'barh') #Gráfico tipo barra horizontal

df.plot(x='turma', y='qtde_alunos', kind='line') #Gráfico tipo linha

df.set_index('turma').plot(y='qtde_alunos', kind='pie') #Gráfico tipo pizza