#include <stdio.h>

main (){
    int num[5]; //Criando uma variável tipo array
    printf("Entre com um número:\n");
    scanf("%d", &num[0]);
    printf("O valor digitado foi: %d", num[0]*2);
    getchar();
    
    return 0;
}