#Controle de repetição for

disciplina= "linguagem"
for c in disciplina:
    if c == "a":
        break       #O comendo BREAK para a repetição quando a sequencia chega no "a"
    else:
        print(c)

for c in disciplina:
    if c == "a":
        continue        # O comando CONTINUE pula a repetição quando a sequancia chega no "a"
    else:
        print(c)