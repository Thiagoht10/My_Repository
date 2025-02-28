#include <stdio.h>

main(){
    int ano= 2018;

    int *ponteito_para_o_ano= &ano;

    //Imprimindo informações do ponteiro

    printf("\n Conteudo do ponteiro: %p", ponteito_para_o_ano); //imprime o valor em hexadecimal.

    printf("\n Conteudo do ponteiro: %d", *ponteito_para_o_ano); //imprime o valor inteiro, mas é preciso add o * no pomteiro.

    printf("\n Conteudo do ponteiro:%p", &ponteito_para_o_ano); //imprime direto do ponteiro.

    //o especificador %p é usado para imprimir o endereço da memória.
}