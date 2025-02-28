#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char CPF1[14];
    char CPF2[11];
    int i=0, n=0;

    printf("Digite seu CPF na forma nnn.nnn.nnn-nn: \n");
    scanf("%s", &CPF1);
    for (i=0; i<14; i++) 
    {
        if (CPF1[i] == '.' || CPF1[i] == '-')
        {
            continue;
        }else
        {
            CPF2[n] = CPF1[i];
            n++;

        }
        
        
    }
    printf("\n\n CPF formatado = %s", CPF2);
    

    return 0;
}
