def create_report():
    componentes_verificados = set(['caixas de som', 'cooler', 'dissipador de calor', 'cpu', 'hd', 'estabilizador', 'gabinete', 'hub', 'impressora', 'joystick', 'memória ram', 'microfone', 'modem', 'monitor', 'mouse', 'no-break', 'placa de captura', 'placa de som', 'placa de vídeo', 'placa mãe', 'scanner', 'teclado', 'webcam'])
    componentes_com_defeito = set(['hd', 'monitor', 'placa de som', 'scanner'])
    
    qtde_componentes_verificados = len(componentes_verificados)
    qtde_componentes_com_defeito = len(componentes_com_defeito)
    
    componentes_ok = componentes_verificados.difference(componentes_com_defeito) #difference() retorna os itens que estão em componentes verificados e que não estão em componentes com defeito.
    
    print(f"Foram verificados {qtde_componentes_verificados} componentes.\n")
    print(f"{qtde_componentes_com_defeito} componentes apresentaram defeito.\n")
    
    print("Os componentes que podem ser vendidos são:")
    for item in componentes_ok:
        print(item)


create_report()