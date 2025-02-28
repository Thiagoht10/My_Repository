lista = ['Python', 30.61, "Java", 51 , ['a', 'b', 20], "maça"]

print(f"Tamanho da lista = {len(lista)}")

for i, item in enumerate(lista):
    print(f"Posição = {i},\t valor = {item} -----------------> tipo individual = {type(item)}")

print("\nExemplos de slices:\n")

#Slice é a seleção de valores dentro de listas. A lista inicia com a posição 0

print("lista[1] = ", lista[1]) #Valor que está na posição 1
print("lista[0:2] = ", lista[0:2]) #valores que estão entre a posição 0 e 2
print("lista[:2] = ", lista[:2])
print("lista[3:5] = ", lista[3:5])
print("lista[3:6] = ", lista[3:6])
print("lista[3:] = ", lista[3:])
print("lista[-2] = ", lista[-2]) #O penúltimo ítem da lista
print("lista[-1] = ", lista[-1]) #O último ítem da lista
print("lista[4][1] = ", lista[4][1])
#print("lista[6]", lista[6])