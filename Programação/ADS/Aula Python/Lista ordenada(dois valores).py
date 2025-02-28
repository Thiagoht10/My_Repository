#A notação abaixo funciona para qualquer linguegem de programação.
lista = [7, 4]

if lista[0] > lista[1]: #Se a posição 0 for maior que a posição 1.
    aux = lista[1] #O valor menor é guardado na varoável auxiliar.
    lista[1] = lista[0] #Aqui substitui o valor da posição 1 pela posição zero 0(o 7 vai para a posição do 4).
    lista[0] = aux #Aqui substitui o valor da posição 0 pelo valor que estava guardado na variável auxiliar.

print(lista) #Aqui da um print do resultadi na tela.