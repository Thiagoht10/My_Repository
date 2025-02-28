#include <stdio.h>
#include <stdlib.h>

int main(){
   float salario, inss, ir, sal_liquido;

   printf("Cálculo do salário liquido com do IR e INSS\n\n");
   printf("\n Digite seu salário bruto:");
   scanf("%f", &salario);

   //Calcular o INSS

   if (salario <= 1693.72)
   {
    inss = salario * 0.08;
   }
   else
        if (salario >= 1693.73 && salario <= 2822.90) //aninhamento de IFs.
        {
            inss = salario * 0.09;
        }
        else
            if (salario >= 2822.91 && salario <= 5645.80)
            {
                inss = salario * 0.11;
            }
    else {
        inss = 621.04;
    }
                
    //Calcular o IR

    if (salario >= 1903.99 && salario <= 2826.65)
    {
        ir = salario * 0.075;
    }
    else
        if (salario >= 2826.66 && salario <= 3751.05)
        {
            ir = salario * 0.15;
        }
        else
            if (salario >= 3751.06 && salario <= 4664.68)
            {
                ir = salario * 0.225;
            }
            else
                if (salario > 4664.69)
                {
                    ir = salario * 0.275;
                }
    
    //Calculo do salario liquido

    sal_liquido = (salario - inss) - ir;

    //Resultado

    printf("\n Desconto do INSS é: %.2f\n\n", inss);
    printf("\n Desconto do IR é: %.2f\n\n", ir);
    printf("\n Salário liquido é %.2f", sal_liquido);

    return 0;            
    
}