#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int opcao;

int corrente(){
    double corrente;
    float tensao;
    float resistencia;
    float potencia;
    double quadrada;
    int opcao_corrente;

    printf("\n Você escolheu calcular corrente!");
    printf("\n Por favor escolha o tipo de entrada dos dados:\n");
    printf("\n 1. Tensão / Potência");
    printf("\n 2. Tensão / Resistência");
    printf("\n 3. Potência / Resistência");
    printf("\n 0. Cancelar...\n");
    scanf("%d", &opcao_corrente);

    switch (opcao_corrente)
    {
    case 1:
        printf("\n Digite o valor de Potência(W):\n");
        scanf("%f", &potencia);
        printf("Digite o valor de Tensão(V):\n");
        scanf("%f", &tensao);
        corrente = potencia / tensao;
        printf("\n O valor de corrente é: %.2f A.", corrente);
        break;
    
    case 2:
        printf("\n Digite o valor de Resistência(ohm):\n");
        scanf("%f", &resistencia);
        printf("Digite o valor de Tensão(V)");
        scanf("%f", &tensao);
        corrente = tensao / resistencia;
        printf("\n O valor de corrente é: %.2f A.", corrente);
        break;

    case 3:
        printf("\n Digite o valor de Potencia(W):\n");
        scanf("%f", &potencia);
        printf("Digite o valor de Resistência(ohm):\n");
        scanf("%f", &resistencia);
        quadrada = potencia / resistencia;
        corrente = sqrt(quadrada);
        printf("\n O valor de corrente é: %.2f A.", corrente);
        break;
    
    default:
        if (opcao_corrente > 3 && opcao_corrente != 0)
        {
            printf("\n Opção inválida!\n");
        }else
        {
            printf("\n Sair...");
        }
        break;
    }
    
    return 0;
}

int main()
{
    printf("Bem-vindo ao programa de cálculos elétricos!");
    printf("\n Escolha uma opção de cálculo:\n");
    printf("\n 1. Cálculo de corrente.\n");
    scanf("%d", &opcao);

    do
    {
        switch (opcao)
        {
        case 1:
            corrente();
            break;
        
        default:
            if (opcao >= 4)
            {
                printf("\n\n Opção inválida!");
            }else
            {
                printf("\n\n Sair...");
            }
            
            
            break;
        }
    } while (opcao >= 1 && opcao != 0);
    
    return 0;
}
