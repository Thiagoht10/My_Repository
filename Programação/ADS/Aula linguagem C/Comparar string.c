#include <stdio.h>

main(){
    char nome[10];
    char apelido[10];
    int resultado;

    printf("Digite seu nome:");
    scanf("%s", &nome);
    printf("Digite seu apelido:");
    scanf("%s", &apelido);

    resultado= strcmp(nome,apelido); //compara a distancia dos caracteres de duas strings.
    printf("%d", resultado);
    
}