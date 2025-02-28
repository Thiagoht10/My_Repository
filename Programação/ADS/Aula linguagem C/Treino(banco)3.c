#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float saldo_conta;
float saldo_emprestimo;
float valor_total_emprestimo;
float saque, deposito;
int opcao;
int confirma_saque, confirma_deposito, confirma_simulacao= 0, confirma_emprestimo;

float sacar(){
    printf("\n\n Você escolheu a opção saque!\n");
    printf("Digite o valor que deseja sacar:\n");
    scanf("%f", &saque);
    printf("Confirma o saque de %.2f reais?\n", saque);
    printf("Digite 1 para sim e 2 para não:\n");
    scanf("%d", &confirma_saque);

    if (confirma_saque == 1)
    {
        if (saque <= saldo_conta)
        {
            if (saque != 0)
            {
                saldo_conta= saldo_conta - saque;
                printf("\n Saque realizado com sucesso!\n");
            } else
            {
                printf("\n\n Insire um valor maior que 0.\n");
            }
            
            
        } else
        {
            printf("\n Saldo insuficiente!\n");
        }
    
    }else
    {
        printf("\n Saque cancelado!\n");
    }
    
    return 0;
}

float depositar(){
    printf("\n\n Você escolheu a opção deposito!\n");
    printf("Digite o valor que deseja depositar:\n");
    scanf("%f", &deposito);
    printf("\n\n Confirma o deposito de %.2f reais?\n", deposito);
    printf("Digite 1 para sim e 2 para não:\n");
    scanf("%d", &confirma_deposito);

    if (confirma_deposito == 1)
    {
        if (deposito > 0)
        {
            saldo_conta= saldo_conta + deposito;
            printf("\n Deposito realizado com sucesso!\n");
        } else
        {
            printf("\n Insira um valor maior que 0.\n");
        }
        
        
    }else
    {
        printf("\n Saque cancelado!\n");
    }
    
    return 0;
}

float pegar_emprestimo(){
    float valor_desejado;
    int parcelas;
    float valor_parcela;
    saldo_emprestimo= 20 * saldo_conta;
    
    if (saldo_emprestimo > 200 && valor_total_emprestimo == 0)
    {
        printf("\n\n Você escolheu a opção empréstimo!\n");
        printf("Você tem %.2f reais disponível no momento.\n", saldo_emprestimo);
        printf("\nVocê deseja realizar um empréstimo?\n");
        printf("Digite 1 para sim e 2 para não:\n");
        scanf("%d", &confirma_simulacao);
        
        if (confirma_simulacao == 1)
        {
            printf("\n\n Digite o valor que deseja emprestado:\n");
            scanf("%f", &valor_desejado);
            printf("\n\n Você pode parcelar em até 48x!\n");
            printf("\n\n Digite a quantidade de parcelas:\n");
            scanf("%d", &parcelas);
            if (valor_desejado <= saldo_emprestimo && parcelas > 1 && parcelas <= 48 && saldo_emprestimo != 0)
            {
                valor_parcela = (valor_desejado * 1.2) / parcelas;
                valor_total_emprestimo= valor_desejado * 1.2;
                printf("\n A parcela fica em %.2f reais.\n", valor_parcela);
                printf("Você confirma o empréstimo?\n");
                printf("Digite 1 para sim e 2 para não:\n");
                scanf("%d", &confirma_emprestimo);
                if (confirma_emprestimo == 1)
                {
                    saldo_conta= saldo_conta + valor_desejado;
                    printf("\n Parabens! Seu empréstimo foi aprovado!");
                    printf("\n O saldo já está em conta!\n");
                }else
                {
                    printf("\n Empréstimo cancelado!\n");
                }
                
                
            }else
            {
                printf("Erro!\n");
                printf("_Selecione ao menos 1 parcela e no máximo 48 parcelas.");
                printf("\n_Não insira um saldo maior que o aprovado.");
                printf("\n_Digite um valor maior que zaro.");
            }
            
            
        }else
        {
            printf("\n Empréstimo cancelado!\n");
        }
        
        
    }else
    {
        printf("\n Empréstimo indisponível no momento!\n");
    }
    
    return 0;
}

float consultar_saldo(){
    float navegar_emprestimo;
    saldo_emprestimo= 20 * saldo_conta;
    printf("\n\n Seu saldo é de %.2f reais!\n", saldo_conta);
    if (saldo_emprestimo > 200 && valor_total_emprestimo == 0)
    {
        printf("\n\n Precisando de dinheiro?\n");
        printf("\n Há %.2f reais aprovado para vc!\n", saldo_emprestimo);
        printf("\n Você deseja fazer uma simulação de crédito?\n");
        printf("\nDigite 1 para sim e 2 para não:\n");
        scanf("%d", &confirma_simulacao);
        if (confirma_simulacao == 1)
        {
            navegar_emprestimo = pegar_emprestimo();
        }else
        {
            printf("\n Ok! Cancelado! \n");
        }
        
        
    }
    

    return 0;
}

int main(int argc, char const *argv[])
{
    do
    {
        printf("\n 1. Sacar");
        printf("\n 2. Depositar");
        printf("\n 3. Consultar saldo");
        printf("\n 4. Empréstimo");
        printf("\n 0. Sair");
        printf("\n\n Selecione uma opção\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            sacar();
            break;
        case 2:
            depositar();
            break;
        case 3:
            consultar_saldo();
            break;
        case 4:
            pegar_emprestimo();
            break;
        default:
            if (opcao == 0)
            {
                printf("\n\n Sair...");
            }else
            {
                printf("\n\n Opção inválida!\n\n");
            }
            
            
            break;
        }
    } while (opcao >= 1 && opcao != 0);
    
    return 0;
}
