cores_claras= set(('branco', 'amarelo', 'rosa','azul'))
cores_escuras= set(('preto', 'marron', 'cinza','azul'))

uniao= cores_claras.union(cores_escuras)
intersecao= cores_claras.intersection(cores_escuras)
diferenca= cores_claras.difference(cores_escuras)

print(uniao)
print(intersecao)
print(diferenca)