#include <stdio.h>
void main(){
    char nome[10];
    char endereco[50];
    int telefone;

    printf("\n Digite seu endereço");
    fflush(stdin);
    fgets(endereco,50,stdin);

    printf("Digite seu nome");
    scanf("%s", nome);

    printf("\n Digite seu telefone");
    scanf("%d", &telefone);

    printf("\n Nome: %s", nome);
    printf("\n Endereço: %s", endereco);
    printf("\n Telefone: %.d", telefone);
    
    return 0;
}