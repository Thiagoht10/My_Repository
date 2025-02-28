#include <stdio.h>

main(){
    int compra1= 0;
    int compra2= 0;
    int resultado= 0;

    printf("Digite o valor da primeira compra:");
    scanf("%d", &compra1);
    printf("Digite o valor da segunda compra:");
    scanf("%d", &compra2);
    resultado = compra1 + compra2;
    printf("Resultado da soma: %d", resultado);
}