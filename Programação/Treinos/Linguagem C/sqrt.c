#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double num, square_root;
    printf("Add um número:\n");
    scanf("%lf", &num);

    square_root = sqrt(num);

    printf("O número é %.2lf", square_root);
    return 0;
}
