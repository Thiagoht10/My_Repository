import sqlite3

conn = sqlite3.connect('aulaDB.db') #Cria conexão com o banco de dados.
cursor = conn.cursor() #Cria o cursor

#Lista as tabelas do banco de dados
cursor.execute("""SELECT name FROM sqlite_master WHERE type='table' ORDER BY name""")
print("Tabelas:")
for tabela in cursor.fetchall():
    print(tabela)

#Captura a DDL usada para criar a tebela
tabela= 'fornecedor'
cursor.execute(f"""SELECT sql FROM sqlite_master WHERE type='table' AND name='{tabela}'""")
print(f"\nDDL da tabela {tabela}:")
for schema in cursor.fetchall():
    print("%s" % (schema))

cursor.close()
conn.close()