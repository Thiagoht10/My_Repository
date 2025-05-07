#include "ft_printf.h"

int     main(void)
{
    int a;
    a = ft_printf("letra: %c\n", 'G');
    printf("%d\n", a);
    return (0);
}