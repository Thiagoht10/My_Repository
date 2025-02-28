#include <stdio.h>

char main(){
    char frase[101]; //Tamanho da string
    printf("\n Digite uma frase");
    fflush(stdin); //limpa a entrada antes de armazenar
    fgets(frase,101,stdin); /* fgets permite inserir strings compostas
    É formado por 3 parâmetros: destino, tamaho e fluxo
    Destino: parâmetro de onde será inserido o valor digitado
    Tamanho: O mesmo do declarado na string
    Fluxo: De onde os dados vão entrar, no caso stdin é o teclado
    */
    printf("\n Frase digitada: %s", frase);
}