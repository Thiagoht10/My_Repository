#include "libft.h"

int     main(void)
{
        int     str1[] = {1,2,3,4,5,6};
        int     str2[10];
        int     str3[10];
        int     z = 6;
        int     a = 0;

        //memmove(str2, str1, z * sizeof(int));
        //ft_memmove(str3, str1, z * sizeof(int));
	printf("%p\n", memmove(NULL, NULL, 0));
	//printf("%p\n", ft_memmove(NULL, NULL, z * sizeof(int)));
        /*while (a < z)
        {
                printf("%d ", str2[a]);
                a++;
        }
        printf("\n");
        a = 0;
        while (a < z)
        {
                printf("%d ", str3[a]);
                a++;
        }*/
        return (0);
}
