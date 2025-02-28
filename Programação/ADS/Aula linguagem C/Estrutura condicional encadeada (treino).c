#include <stdio.h>
#include <stdlib.h>

main(){
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("\n Você é jovem!");
    }
    else
        if ((idade >= 18) && (idade <= 64))
        {
            printf("\n Você é um adulto!");
        }
        else
        if (idade >= 65)
        {
            printf("\n Você é um idoso!");
         }
            
    return 0;  
}