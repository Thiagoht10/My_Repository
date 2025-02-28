#include <stdio.h>

void main(){
    int x=10, y=5;
    float peso= 75.5;
    char genero= 'M';
    int altura= 1.73;

    printf("\n Espaço alocado para x= %d", sizeof(x));
    printf("\n Espaço alocado para y= %d", sizeof(y));
    printf("\n Espaco alocado para peso= %f",sizeof(peso));
    printf("\n Espaco alocado para genero= %c", sizeof(genero));
    printf("\n Espaco alocado para altura= %d", sizeof(altura));
    printf("\n Teste de dados da variável altura: %d", altura);
}