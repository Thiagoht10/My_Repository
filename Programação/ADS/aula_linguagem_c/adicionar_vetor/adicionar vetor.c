#include <stdio.h>

main (){
    float idade[3]= {0,0,0}; // cria o vetor

    scanf("%f", &idade[2]); // insere o dado no vetor
    scanf("%f", &idade[1]);
    printf("%.0f", idade[2]);
    printf("\n%.0f", idade[1]);
}