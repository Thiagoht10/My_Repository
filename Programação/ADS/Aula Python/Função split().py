#Convertendo data no formato dd/mm/aa por extenso

def converter_mes_para_extenso(data):
    mes = '''janeiro fevereiro março
      abril maio junho julho agosto
      setembro outubro novembro
      dezembro'''.split() #Quebra a lista toda vez que encontra espaço em branco.
    d, m, a = data.split('/') #Quebra a data toda vez que encontra /.
    mes_extenso = mes[int(m) - 1] # O mês 1, estará na posição 0!
    return f'{d} de {mes_extenso} de {a}'

print(converter_mes_para_extenso(data= input()))