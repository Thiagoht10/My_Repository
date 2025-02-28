#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float altura, peso, calculo;

float IMC(){
    calculo = peso / (altura * altura);
    return calculo;
}

float main(int argc, char const *argv[])
{
    float resultado;
    printf("Insira seu peso:");
    scanf("%f", &peso);
    printf("Insira sua altura:");
    scanf("%f", &altura);
    resultado = IMC();
    printf("\n\nSeu IMC é: %.2f\n\n", resultado);

    if (resultado < 18.5)
    {
        printf("Você está abaixo do peso!");
    }else
    {
        if (resultado >= 18.5 && resultado <= 24.9)
        {
            printf("Você está com o peso ideal!");
        }else
        {
           printf("Você está acima do peso!");
        }
        
        
    }
    return 0;
}

