#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int* alocar() {
    int *memoria = (int*) malloc(sizeof(int)); //Criação de um ponteiro.
    /*Função "malloc()" é usada para alocar espaço de memória. Já a função "sizeof()" diz que o tamanho será inteiro*/
    return memoria;
}
int main(){
   int *num = alocar();
   if (num != NULL){ //A função "malloc()" retorna valor null caso a alocação não se concretizar.
        printf("\nInforme um número inteiro: ");
        scanf("%d", num);
        printf("\nNúmero informado: %d", *num);
   }
   
   return 0;
}
