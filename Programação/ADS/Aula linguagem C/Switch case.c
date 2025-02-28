#include <stdio.h>
#include <stdlib.h>

main(){
    char caso_escolhido; //Esta variável vai receber os valores que da função switch.
    float valor, desc, total; //Estas variáveis serão usadas para armazenar os valores das funções case.

    printf("Digite o valor da compra:");
    scanf("%f", &valor); //Inserção de dados.
    printf("Digite a letra que representa um desconto:");
    printf("\n b. branco");
    printf("\n v. vermelho");
    printf("\n a. azul");
    printf("\n Faça sua escolha:\n");
    scanf("%s", &caso_escolhido); //Inserção de dados.

    switch (caso_escolhido) //Aqui é escolhido a variável que guardará os valores da função switch.
    {
    case 'b': //Primeiro caso.
        printf("\n Você escolheu a cor branco, seu desconto será de 30 por cento.");
        desc = valor * 0.3;
        total = valor - desc;
        printf("\n O valor da sua compra é de %.2f reais", total);
        break; //Esta função pausa os casos, se não houver esta função o programa continua lendo os outros casos.

    case 'v': //Segundo caso.
        printf("\n Você escolheu a cor vermelha, seu desconto será de 15 por cento.");
        desc = valor * 0.15;
        total = valor - desc;
        printf("\n O valor da sua compra é de %.2f reais", total);
        break; //Esta função pausa os casos, se não houver esta função o programa continua lendo os outros casos.

    case 'a': //Terceiro caso.
        printf("\n Você escolher a cor azul, seu desconto será de 5 por cento");
        desc = valor * 0.05;
        total = valor - desc;
        printf("\n O valor da sua compra é de %.2f reais", total);
        break; //Esta função pausa os casos, se não houver esta função o programa continua lendo os outros casos.
    
    default: //Se nenhum dos casos ocorrer, acontecerá a função default.
        printf("\n Opcão inválida!");
        break; //Esta função pausa os casos, se não houver esta função o programa continua lendo os outros casos.
    }
}