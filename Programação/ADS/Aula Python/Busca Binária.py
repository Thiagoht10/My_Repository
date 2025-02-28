def executar_busca_binaria(lista, valor):
    minimo = 0
    maximo = len(lista) - 1 #Maximo é igual tamanho da lista menos 1.
    while minimo <= maximo: #Enquanto minimo for menor ou igual ao maximo.
        # Encontra o elemento que divide a lista ao meio.
        meio = (minimo + maximo) // 2
        # Verifica se o valor procurado está a esquerda ou direita do valor central.
        if valor < lista[meio]: #Se valor menor que meio.
            maximo = meio - 1 #Atualiza o valor maximo, criando uma lista menor na próxima repetição.
        elif valor > lista[meio]: #Se valor maior que meio.
            minimo = meio + 1 #Atualiza o valor minimo, criando uma lista menor na próxima repetição
        else:
            return True # Se o valor for encontrado para aqui.
    return False # Se chegar até aqui, significa que o valor não foi encontrado.
lista = list(range(0, 1860))

print(lista)

print('\n',executar_busca_binaria(lista=lista, valor=10))
print('\n', executar_busca_binaria(lista=lista, valor=2000))