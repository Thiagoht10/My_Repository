#include <unistd.h>

void	ft_putchar(int x, int y)
{
	char l = 0;
	char c = 0;

	while(l <= y)
	{
		while(c < x)
		{
			if(c == 0 && l == 0)
			{
				write(1, "/", 1);
				c++;
			}
			if(l == 0 && x > 1)
			{
				write(1, "a", 1);
				c++;
				c++;
			}
			if(l == 0 && c == x && y > 1)
			{
				write(1, "\\", 1);
				c++;
			}
			if(l >= 1 && l < y && c == 0 )
			{
				write(1, "b", 1);
				l++;
				c++;
			}
			if(l >= 1 && l < y && c >= 1)
			{
				write(1, " ", 1);
				c++;
				c++;
			}
			if(l >= 1 && c == x)
			{
                                write(1, "c", 1);
                                c++;
                        }
			if(l == y && c == 0)
			{
				write(1, "\\", 1);
				c++;
			}
			if(l == y && y > 1)
			{
				write(1, "d", 1);
				c++;
				c++;
			}
			if(l == y && c == x && c > 1)
				write(1, "/", 1);
		}
		if(y > 1)
			write(1, "\n", 1);
		l++;
		c = 0;
	}
}

int     main(void)
{
        int     x;
        int     y;
        y = 6;  /*determina a quantidade de linha*/
        x = 6;  /*determina a quantidade de coluna*/

        ft_putchar(x, y);
        return(0);
}
