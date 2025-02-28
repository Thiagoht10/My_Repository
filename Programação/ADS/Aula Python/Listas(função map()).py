# Exemplo 1
print("Exemplo 1")
linguagens = '''Python Java JavaScript C C# C++ Swift Go Kotlin'''.split()

nova_lista = map(lambda x: x.lower(), linguagens) #A função map() retorna objeto iterável.
print(f"A nova lista é = {nova_lista}\n")

nova_lista = list(nova_lista) #Transforma o objeto iterável da função map() numa lista usando o construtor list().
print(f"Agora sim, a nova lista é = {nova_lista}")


# Exemplo 2
print("\n\nExemplo 2")
numeros = [0, 1, 2, 3, 4, 5]

quadrados = list(map(lambda x: x*x, numeros)) #Aqui ja fazemos a conversão direto para lista. Assim podemos ver o resultado.
print(f"Lista com o número elevado a ele mesmo = {quadrados}\n")