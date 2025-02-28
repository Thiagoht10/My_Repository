#Função retorna valor vazio
def imprimir_mensagem(disciplina, curso): #Os parâmetro são variáveis que só existem dentro da função.
    print(f"Minha primeira função em Python desenvolvida na disciplina: {disciplina}, do curso: {curso}.")
    #O comendo def define uma função.

resultado = imprimir_mensagem("Python", "ADS") #Valor atribuído ao parâmetro, ou seja, à variável.
print(f"Resultado = {resultado}")
#A variável resultado chama a função imprimir_mensagem().


#Função retorna valor
def imprimir_mensagem(disciplina, curso): #Os parâmetro são variáveis que só existem dentro da função.
    return f"Minha primeira função em Python desenvolvida na disciplina: {disciplina}, do curso: {curso}."

    
mensagem = imprimir_mensagem("Python", "ADS") #Valor atribuído ao parâmetro, ou seja, à variável.
print(mensagem)
#A variável mensagem chama a função imprimir_mensagem().