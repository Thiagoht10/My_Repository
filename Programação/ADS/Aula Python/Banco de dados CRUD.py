import sqlite3

conn = sqlite3.connect('aulaDB.db') #Cria conexão com o banco de dados.
cursor = conn.cursor() #Cria o cursor
print(type(conn))

dados= [ #Variável que guarda mais de um item em tuplas dentro de uma lista.
    ('Empresa D', '44.444.444/4444-44', 'São Paulo', 'SP', '44444-444', '2020-01-01'),
    ('Empresa E', '55.555.555/5555-55', 'São Paulo', 'SP', '55555-555', '2020-01-01'),
    ('Empresa F', '66.666.666/6666-66', 'São Paulo', 'SP', '66666-666', '2020-01-01')
]

#Inserção de dados
cursor.execute(""" 
INSERT INTO fornecedor (nome_fornecedor, cnpj, cidade, estado, cep, data_cadastro)
VALUES ('Empresa A', '11.111.111/1111-11', 'São Paulo', 'SP', '11111-111', '2020-01-01')
""")

cursor.execute("""
INSERT INTO fornecedor (nome_fornecedor, cnpj, cidade, estado, cep, data_cadastro)
VALUES ('Empresa B', '22.222.222/2222-22', 'Rio de Janeiro', 'RJ', '22222-222', '2020-01-01')
""")

cursor.execute("""
INSERT INTO fornecedor (nome_fornecedor, cnpj, cidade, estado, cep, data_cadastro)
VALUES ('Empresa C', '33.333.333/3333-33', 'Curitiba', 'PR', '33333-333', '2020-01-01')
""")

#Inserção de muitos dados
cursor.executemany("""
INSERT INTO fornecedor (nome_fornecedor, cnpj, cidade, estado, cep, data_cadastro)
VALUES (?,?,?,?,?,?)
""", dados)

conn.commit() #Salva os dados no banco de dados.

print("Dados inseridos!")
print("Descrição do cursor: ", cursor.description)
print("Linhas afetadas: ", cursor.rowcount)

#É necessário fechar os cursor e a conexão com o banco de dados.
cursor.close()
conn.close()