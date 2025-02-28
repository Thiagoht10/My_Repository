numeros  = list(range(0, 21)) #Função range() cria um objeto iterável numérico.

numeros_pares = list(filter(lambda x: x % 2 == 0, numeros)) #O resto de x dividido por 2 igual à 0.

print(numeros_pares)
[0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20]