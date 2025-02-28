import sqlite3

conn = sqlite3.connect('aulaDB.db') #Cria conexão com o banco de dados.
cursor = conn.cursor() #Cria o cursor

cursor.execute("UPDATE fornecedor SET cidade = 'Bahia' WHERE id_fornecedor= 5") #Altera os dados da linha que possui o id= 5.
conn.commit() #Salva a alteração

cursor.execute("SELECT * FROM fornecedor")
for linha in cursor.fetchall():
    print(linha)

cursor.close()
conn.close()