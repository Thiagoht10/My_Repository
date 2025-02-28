def executar_bubble_sort(lista):
    n = len(lista) #Comprimento da lista.
    for i in range(n-1):
        for j in range(n-1):
            if lista[j] > lista[j + 1]: #Verifica se a posição 0 é maior que a posição 1.
                lista[j], lista[j + 1] = lista[j + 1], lista[j] #Se for, é trocado a ordem na lista.
    print(lista)
    return lista

lista = [10, 9, 5, 8, 11, -1, 3]
executar_bubble_sort(lista)