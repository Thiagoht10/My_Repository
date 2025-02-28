#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int soma(){
    int valor_1= 0;
    int valor_2= 0;
    int resultado= 0;

    printf("Digite o primeiro valor:");
    scanf("%d", &valor_1);
    printf("Digite o segundo valor:");
    scanf("%d", &valor_2);

    resultado= valor_1 + valor_2;

    printf("O resultado é: %d", resultado);

    return 0;
}

int main(int argc, char const *argv[])
{
    int resposta;
    resposta = soma();
    return 0;
}
