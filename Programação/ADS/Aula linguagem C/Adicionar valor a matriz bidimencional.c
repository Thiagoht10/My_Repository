#include <stdio.h>

main (){
    float notas [3] [2]; //Com dois quadrantes é possível criar matrizes

    printf ("Digite sua nota.");
    scanf ("%f", &notas [1][0]); //Para guardar valor na matriz é preciso especificar a linha e coluna.
    printf ("Sua nota é %.0f", notas [1][0]); //Para monstrar os dados é preciso selecionar a linha e coluna.

}