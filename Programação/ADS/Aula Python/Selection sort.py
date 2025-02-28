def executar_selection_sort(lista):
    n = len(lista) #Variável n recebe o comprimento da lista.
    
    for i in range(0, n): #Esse loop percorre toda a lista, do 0 ao n.
        index_menor = i #É usado para acompanhar o índice do menor valor encontrado.
        for j in range(i+1, n): #Percorre a lista a partir do próximo valor após o i.
            if lista[j] < lista[index_menor]: #Se a lista[j] for menor que lista[index_menor];
                index_menor = j #index_menor recebe o valor de j.
        lista[i], lista[index_menor] = lista[index_menor], lista[i]
    print(lista)
    return lista
    


lista = [10, 9, 5, 8, 11, -1, 3]
executar_selection_sort(lista)

#De outra forma

def executar_selection_sort_2(lista):
    lista_ordenada = [] #Vai receber os valores na ordem.
    while lista:
        minimo = min(lista) #Guarda o valor mínimo da lista.
        lista_ordenada.append(minimo) #Adiciona o menor valor na lista ordenada.
        lista.remove(minimo) #Remove o menor valor da lista original.
        print(lista_ordenada)
    return lista_ordenada


lista = [10, 9, 5, 8, 11, -1, 3]
executar_selection_sort_2(lista)