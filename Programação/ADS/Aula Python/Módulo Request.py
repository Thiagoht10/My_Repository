# primeiro passo extrair as informações com o request utilizando o método json().

import requests #Importa o módulo ao código.
import datetime as dt #Importa o módulo ao código.

jogos = requests.get('http://worldcup.sfg.io/matches').json() #Joga numa variável o conteúdo do link usando o método get() e transformando em lista usando o método json().
print(type(jogos))

# segundo passo: percorrer cada dicionário da lista (ou seja, cada jogo) extraindo as informações

info_relatorio = []
file = open('relatorio_jogos.txt', "w") # cria um arquivo txt na pasta em que está trabalhando.

for jogo in jogos:
    data = jogo['datetime'] # extrai a data
    data = dt.datetime.strptime(data, "%Y-%m-%dT%H:%M:%SZ") # converte de string para data
    data = data.strftime("%d/%m/%Y") # formata
    
    nome_time1 = jogo['home_team_country']
    nome_time2 = jogo['away_team_country']

    gols_time1 = jogo['home_team']['goals']
    gols_time2 = jogo['away_team']['goals']
    
    linha = f"({data}) - {nome_time1} x {nome_time2} = {gols_time1} a {gols_time2}"
    file.write(linha + '\n') # escreve a linha no arquivo txt
    info_relatorio.append(linha)

file.close() # é preciso fechar o arquivo
info_relatorio[:5]