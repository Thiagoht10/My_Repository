#include <stdio.h>
#include <stdlib.h>

int main (void){
    char PARAR;
    int NUM;

    printf("\n Digite um número:");
    scanf("%d", &NUM);

    while ((getchar() != '\n') && (!EOF)); // getchar())!= ‘\n’ está comparando esse caractere de leitura com o caractere de nova linha. 
    // EOF é um valor especial, para garantir que ele não continue tentando ler quando chegar ao final do arquivo.
    {
        if (NUM >= 10 && NUM <= 50)
        {
            printf("O número está entre 10 e 50.\n\n");
        }
        else
        {
            printf("O numero nao esta entre 10 e 50.\n");
            printf("Aperte <Enter> para parar...");
        }
        PARAR = getchar();
        
        
    }
    
}