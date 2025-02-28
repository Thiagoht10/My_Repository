#include <stdio.h>

struct automovel //Uma struct fica fora da funçãp main.
{   
    //Aqui se cria a estrutura e seus campos
    char modelo[20];    //Cria-se um vetor para utilizar uma string. //Campo 1
    int ano;    //Campo 2
    float valor;    //Campo 3
};

int main() {
    struct automovel dadosAutomovel;    //Aqui é criado uma variável dentro da estrutura para armazenar os dados
  
    printf("\n Digite o modelo do automovel:");
    scanf("%s", dadosAutomovel.modelo);     //Acessando a variavel e selecionando o campo da estrutura
    printf("\n Digite o ano do automovel:");
    scanf("%d", &dadosAutomovel.ano);   //Usa-se sempre o ponto após a variável para selecionar o campo da estrutura
    printf("\n Digite o valor do automovel:");
    scanf("%f", &dadosAutomovel.valor);

    //Dados sendo mostrados na tela!
    printf("\nDados atribuidos:");
    printf("\n %s", dadosAutomovel.modelo);
    printf("\n %d", dadosAutomovel.ano);
    printf("\n %.2f", dadosAutomovel.valor);
}