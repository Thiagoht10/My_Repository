#include <stdio.h>
#include <stdlib.h>

main (){
    float metragem_1, metragem_2, resultado;
    int resp;

    metragem_1 = 0;
    metragem_2 = 0;
    resultado = 0;

    do
    {
        printf("CALCULO DOS METRO QUADRADOS");
        printf("\n\n Digite a metragem 1:");
        scanf("%f", &metragem_1);
        printf("\n Digite a metragem 2:");
        scanf("%f", &metragem_2);
        resultado = metragem_1 * metragem_2;
        printf("\n O terreno tem %.2f metros quadrados.", resultado);
        printf("\n\n Digite 1 para continuar e 2 para sair.");
        scanf("%d", &resp);
    } while (resp == 1);

    return 0;
    
}