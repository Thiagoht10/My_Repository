#include <stdio.h>
#include <stdlib.h>


int main (){
    float saldo_conta;
    float saque, deposito;
    int opcao;
    int confirma_saque;
    int confirma_deposito;

    do
    {
        printf("\n 1. Sacar");
        printf("\n 2. Depositar");
        printf("\n 3. Consultar saldo");
        printf("\n 0. Sair");
        printf("\n\n Selecione uma opção\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\n\n Opção saque selecionado!\n");
            printf("\n Digite o valor que vc deseja sacar:\n");
            scanf("%f", &saque);
            printf("\n Confirma o saque de %.2f reais?", saque);
            printf("\n Digite 1 para sim e 2 para não\n");
            scanf("%d", &confirma_saque);
            if (confirma_saque == 1)
            {
                if (saque <= saldo_conta)
                {
                    saldo_conta= saldo_conta - saque;
                    printf("\n\n SAQUE REALIZADO COM SUCESSO!\n\n");
                }else
                {
                    printf("\n\n SALDO INSUFICIENTE!\n\n\n");
                }
                
                
            }else
            {
                printf("\n\n SAQUE CANCELADO!\n\n");
            }
        break;
            
            
        
        case 2:
            printf("\n\n Opção deposito selecionado!\n");
            printf("\n Digite o valor que deseja depositar:\n");
            scanf("%f", &deposito);
            printf("\n Confirma o depósito de %.2f reais?", deposito);
            printf("\n Digite 1 para sim e 2 para não\n");
            scanf("%d", &confirma_deposito);
            switch (confirma_deposito)
            {
            case 1:
                if (deposito > 0)
            {
                saldo_conta= saldo_conta + deposito;
                printf("\n\n DEPÓSITO REALIZADO COM SUCESSO!\n\n");
            } else
            {
                printf("\n DIGITE UM VALOR MAIOR QUE 0\n\n");
            }
            
                break;
            
            default:
                if (confirma_deposito == 2)
                {
                    printf("\n DEPÓSITO CANCELADO!\n\n");
                }
                
                break;
            }
        break;
            
        case 3:
        printf("\n\n Você escolheu a opção consultar saldo!");
        printf("\n Seu saldo é de %.2f reais.\n\n", saldo_conta);
            
        break;
        
        default:
            if (opcao == 0)
            {
                printf("\n Sair...");
                saldo_conta= 0;
            } else
            {
                printf("\n OPÇÃO INVÁLIDA!");
            }
            
            
            break;
        }

    } while (opcao <= 3 && opcao != 0);
    
    
}
    
