#include <stdio.h>

char main(){
    char name[10]; //declara o espaçamento da string
    printf("\n Digite seu nome");
    scanf("%s", &name); //%s é o classificador de string
    printf("\n Seu nome é %s", name);
}