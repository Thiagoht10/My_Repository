#include <stdio.h>

main(){
    int nota1= 0;
    int nota2= 0;
    int media= 0;
    int resultado;
    
    printf("Digite a primeira nota:");
    scanf("%d", &nota1);
    printf("Digite a sengunda nota:");
    scanf("%d", &nota2);
    printf("\n nota1 e nota2 são iguais? %d", nota1==nota2);
    printf("\n nota1 é maior que nota2? %d", nota1>nota2);
    printf("\n nota1 é menor que a nota2? %d", nota1<nota2);

    media= (nota1+nota1)/2;
    resultado= media>=6;
    printf("\n O aluno foi aprovado? %d", resultado);
    
}