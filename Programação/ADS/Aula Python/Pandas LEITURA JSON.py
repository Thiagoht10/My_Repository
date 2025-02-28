import pandas as pd

leitura_json= pd.read_json("https://api.bcb.gov.br/dados/serie/bcdata.sgs.11/dados?formato=json").head() #Leitura aquivo json
print(leitura_json)

leitura_csv= pd.read_csv("https://people.sc.fsu.edu/~jburkardt/data/csv/cities.csv").head() #Leitura arquivo csv
print(leitura_csv)

dataframe= pd.DataFrame(leitura_json)
print(dataframe)

