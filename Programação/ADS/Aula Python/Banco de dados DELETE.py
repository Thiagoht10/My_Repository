import sqlite3

conn = sqlite3.connect('aulaDB.db') #Cria conexão com o banco de dados.
cursor = conn.cursor() #Cria o cursor

cursor.execute("DELETE FROM fornecedor WHERE id_fornecedor = 5") #Aqui executamos código sql para deletar dados no banco de dados.
conn.commit()

cursor.execute("SELECT * FROM fornecedor")
for linha in cursor.fetchall():
    print(linha)

cursor.close()
conn.close()