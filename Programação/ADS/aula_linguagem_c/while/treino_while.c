#include <stdio.h>
#include <stdlib.h>

main (){
    int valor1, valor2, resultado;
    int opcao;

    do
    {
        printf("\nDigite 1 para soma e 2 para subtração:");
        printf("\n Ou 0 para sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n Você escolheu a soma!\n");
            printf("Insira o valor 1:\n");
            scanf("%d", &valor1);
            printf("Insira o valor 2:\n");
            scanf("%d", &valor2);
            resultado= valor1 + valor2;
            printf("\n A soma é: %d\n", resultado);
            break;

        case 2:
            printf("\nVocê escolheu a subtração!\n");
            printf("Insira o valor 1:\n");
            scanf("%d", &valor1);
            printf("Insira o valor 2:\n");
            scanf("%d", &valor2);
            resultado= valor1 - valor2;
            printf("\n A subtração é: %d\n", resultado);
            break;
        
        default:
            if (opcao == 0)
            {
                printf("\n Sair...\n");
            }
            else
            {
                printf("\n Opção inválida.\n");
            }
            break;
        }
    } while (opcao <3 && opcao !=0);
    system('pause');
    
}
    
