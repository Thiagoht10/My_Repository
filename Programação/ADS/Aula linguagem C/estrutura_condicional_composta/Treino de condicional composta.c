#include <stdio.h>

main(){
   float nota_P1;
   float nota_P2;
   float resultado_semestre;

   printf("Digite a nota P1:");
   scanf("%f", &nota_P1);
   printf("Digite a nota P2:");
   scanf("%f", &nota_P2);

   resultado_semestre= (nota_P1 + nota_P2)/2;

   if (resultado_semestre >= 6) //comando condicional
   {
    printf("Aluno aprovado! Obteve %.2f na média", resultado_semestre);
   }
   else {
    printf("Aluno reprovado! Obteve %.2f na média", resultado_semestre);
   }
   
}