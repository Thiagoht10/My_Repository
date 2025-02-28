import re

string = 'meuArquivo_20-01-2020.py'
padrao = "[a-zA-Z]*" #expressão regular para buscar por sequências de letras maiúsculas e minúsculas [a-zA-Z], que pode variar de tamanho 0 até N (*)

texto1 = re.search(padrao, string).group() #usamos a função group() da re para capturar o resultado. 
texto2 = re.match(padrao, string).group()
texto3 = re.split("_", string)[0] #o padrão "_" como a marcação de onde cortar a string, o que resulta em uma lista com dois valores – como o texto é a primeira parte, capturamos essa posição com o [0].

print(texto1)
print(texto2)
print(texto3)