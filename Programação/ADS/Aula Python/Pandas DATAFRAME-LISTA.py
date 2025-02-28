import pandas as pd

lista_nomes= 'Camila João Maria Milena Thiago'.split()
lista_cpfs= '111.111.111-11 222.222.222-22 333.333.333-33 444.444.444-44 555.555.555-55'.split()
lista_emails= 'camila.barros@gmail.com joao.guilherme@gmail.com maria.luiza@gmail.com milena.miranda@gmail.com thiago.souza@gmail.com'.split()
lista_idades= [32,26,56,25,26]

pd.DataFrame(lista_nomes, columns= ['NOMES'])
print(pd.DataFrame(lista_nomes, columns= ['NOMES']),'\n')

pd.DataFrame(lista_nomes, columns=['NOMES'], index= lista_cpfs)
print(pd.DataFrame(lista_nomes, columns=['NOMES'], index= lista_cpfs),'\n')

dados= list(zip(lista_nomes, lista_cpfs, lista_emails, lista_idades)) #Cria uma lista de tuplas.
print(dados,'\n')

pd.DataFrame(dados, columns=['nome', 'CPFs', 'Emails', 'Idades'])
print(pd.DataFrame(dados, columns=['nome', 'CPFs', 'Emails', 'Idades']))