#include <stdio.h>

int main(int argc, char const *argv[])
{
    int idade;
    printf ("digite a idade do candidato"); // monstra na tela a mensagem
    scanf ("%d", &idade); //entrada de dados
    printf ("O candidato tem %d anos!\n", idade); //mostra na tela a idade formatada na frase
    system ("pause"); //pausa a execução do sistema
    return 0; //retorna ao sistema operacional
}