#include <stdio.h>

int main(){
    int ano_2014 [2];
    int ano_2015 [2];
    int ano_2016 [2];

    int media_2014;
    int media_2015;
    int media_2016;

    printf("Insira os dados do primeiro semestre de 2014:");
    scanf("%d", &ano_2014[0]);
    printf("Insira os dados do segunto semestre de 2014:");
    scanf("%d", &ano_2014[1]);
    printf("Insira os dados do primeiro semestre de 2015:");
    scanf("%d", &ano_2015[0]);
    printf("Insira os dados do segundo semestre de 2015:");
    scanf("%d", &ano_2015[1]);
    printf("Insira os dados do primeiro semestre de 2016:");
    scanf("%d", &ano_2016[0]);
    printf("Insira os dados do segundo semestre de 2016:");
    scanf("%d", &ano_2016[1]);

    media_2014= (ano_2014[0] + ano_2014[1])/2;
    media_2015= (ano_2015[0] + ano_2015[1])/2;
    media_2016= (ano_2016[0] + ano_2016[1])/2;

    printf("\n 2014 obteve a maior média? %d",((media_2014 > media_2015) && (media_2014 > media_2016)));

}