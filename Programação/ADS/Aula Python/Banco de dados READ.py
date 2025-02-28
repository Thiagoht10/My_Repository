import sqlite3

conn = sqlite3.connect('aulaDB.db') #Cria conexão com o banco de dados.
cursor = conn.cursor() #Cria o cursor

cursor.execute("SELECT * FROM fornecedor") #(Select *) é usado para selecionar todos o dados da tabela fornecedor.
resultado= cursor.fetchall() #Coloca o resultado na variável resultado.

print("Descrição do cursor= ", cursor.description) #Mostra a descrição dos dados.
print("Linhas afetadas", cursor.rowcount) #Mostra a quantidade de linhas modificadas.

print(resultado [0:2]) #Imprime a lista da posição 0 à 2

for linha in resultado:
    print(linha) #Retorna as tuplas alinhadas

cursor.execute("SELECT * FROM fornecedor WHERE id_fornecedor= 5") #Seelecionando registro que satisfaça uma condição usando a cláusula "where".
resultadoII= cursor.fetchall()
print(resultadoII)

cursor.close()
conn.close()