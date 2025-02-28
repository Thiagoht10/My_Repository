import pandas as pd

dados= {
    'ANO': [2015,2016,2017,2018,2019,2020],
    'JAN': [20.5,32,41,32.5,36,23],
    'FEV': [19.5,23,42.6,35.8,62.4,56],
    'MAR': [21.7,26.1,50.5,37.2,34,28.5]
}

DataFrame= pd.DataFrame(dados)

print(DataFrame)

#Cria um gráfico do mês de jameiro
DataFrame.plot(x= 'ANO', y= 'JAN', kind='bar')

#Cria um gráfico comparando os 3 meses.
DataFrame[['ANO', 'JAN', 'FEV', 'MAR']].plot.bar(x= 'ANO')