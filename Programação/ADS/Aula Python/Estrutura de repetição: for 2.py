#Estrutura de repetição for

texto= """Tres pratos de trigo para tres tigres tristes"""

for i, c in enumerate(texto):
    if c == 'a' or c == 'r':
        print(f"Vogal {c} encontrada na posição {i}")
    else:
        continue

#Esse código mostra as letras encontradas nas posições da sequencia do texto.