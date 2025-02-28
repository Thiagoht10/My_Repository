#include <stdio.h>
#include <ctype.h>

main (){
    int numero;
    int i;
    int posicao = 0;
    int vetor[10];
    
    printf("Entre com um número de até 3 casas diferentes de zero, a ser procurado num vetor de 10 posições:");
    scanf("%d", &numero);
    
    //preenche o vetor com números
    for (i = 0; i < 10; i++)
    {
        printf("\n Entre com um número para posição %02d", i+1);
        scanf("%d", &vetor[i]);
    }

    //Identifica a posição do número lido no vetor de entrada
    while (vetor[posicao] != numero);
    {
        posicao++;
    }

    //Imprime o vetor
    for (i = 0; i < 10; i++)
    {
        printf("%03d", vetor[i]);
    }

    //imprime espaços a posição do número e em seguida um "*" sob o número
    printf("\n");
    for (i = 0; i < posicao; i++)
    {
        printf("  ");
    }
    printf("*");
    
    
    
    
    return 0;
}