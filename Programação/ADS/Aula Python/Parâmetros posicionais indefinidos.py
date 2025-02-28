#Parâmetro posicional indefinido

def imprimir_parametros(*args): #Args define parâmetros arbitrários. O * é obrigatório!
    qtde_parametros = len(args) #len() guarda a quantidade de parâmetros dentro da variável.
    print(f"Quantidade de parâmetros = {qtde_parametros}")
    
    for i, valor in enumerate(args):
        print(f"Posição = {i}, valor = {valor}")

        
print("\nChamada 1")        
imprimir_parametros("São Paulo", 10, 23.78, "João")

print("\nChamada 2")        
imprimir_parametros(10, "São Paulo")