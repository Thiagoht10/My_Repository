vogais= 'aeiou'

resultado= vogais.index('i')
print(resultado)

#Construção da função index().
def procurar_valor(lista, valor): #Cria-se duas variaveis na função.
    tamanho_lista = len(lista) #Usa a função len() para dimensionar o tamanho da lista.
    for i in range(tamanho_lista): #Cria um range() obedecendo o tamanho da lista.
        if valor == lista[i]:
            return i
    return None


vogaisII = 'aeiou' #Define uma sequência numa variável.

resultado = procurar_valor(lista= vogaisII, valor='u') #Invoca a variável e atribui valor às variaveis.

if resultado != None: #Se o resultado for diferende de none.
    print(f"Valor encontrado na posição {resultado}")
else:
    print("Valor não encontrado")