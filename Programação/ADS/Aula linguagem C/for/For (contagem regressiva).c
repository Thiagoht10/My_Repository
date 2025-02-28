#include <stdio.h>

 int main (){
    int contador;
    printf("\n Digite um número para contagem regressiva:\n\n");
    scanf("%d", &contador);
    for (contador; contador >= 1; contador--)
    {
        printf("%3d", contador);
    }
    getchar();
}