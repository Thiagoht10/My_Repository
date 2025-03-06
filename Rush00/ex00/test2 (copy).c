#include <unistd.h>

void	ft_putchar(int x, int y)
{
	char l = 1;
	char c = 1;

	while(l < y)
	{
		while(c < x)
		{
			if((c == 1 && l == 1) || (c == 1 && l == y))
				write(1, "/", 1);
			
			else if((l == 1 && c == x) || (c == 1 && l == y))
				write(1, "\\", 1);
			
			else if((l >= 1 || l < y || c == 1) || (l >= 1 || l < y || c == 1))
				write(1, "*", 1);
			
			else
				write(1, " ", 1);
			
			c++;
		}
		write(1, "\n", 1);
		l++;
		c = 0;
	}
}

int     main(void)
{
        int     x;
        int     y;
        y = 5;  /*determina a quantidade de linha*/
        x = 5;  /*determina a quantidade de coluna*/

        ft_putchar(x, y);
        return(0);
}
