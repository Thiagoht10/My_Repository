#include "libft.h"

int     main(void)
{
        int     a;
        int     b;
        char    *str = "aaaa-b bb-ddd";
        char    c = ' ';
        char    **arr = ft_split(str, c);

        a = 0;
        while (arr[a] != NULL)
        {
                printf("%s ", arr[a]);
                a++;
        }
        b = 0;
        while (arr[b])
                free(arr[b++]);
        free(arr);
        return (0);
}