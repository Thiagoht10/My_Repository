#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float calcular() { //Criação da função calcular.
/*Abaixo está o comando da função*/
    float num;
    printf("\nDigite um número: ");
    scanf("%f", &num);
    return num * num; //O retorno será o quadrado do número digitado.
}
 
int main(){ //Aqui de fato começa o código, ou seja, na linha 13.
    float resultado = 0; //Declaração de uma variável.
    resultado = calcular(); //Aqui se chama a função calcular.
    printf("\nO quadrado do número digitado é %.2f ", resultado);
    return 0;
} 
