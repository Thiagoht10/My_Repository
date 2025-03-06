#include <unistd.h>
#include <stdio.h>

void	ft_putchar(int x, int y)
{
	char	c = 0;
	char	l = 0;
	char	*bn = "/";
	char	*bi = "\\";
	
	while(l < y)
	{
		/*if(l == 0)
		{
			write(1, "/", 1);
		}*/
		while(c < x)
		{
			while(c == 0 && y == 0) 
			{
                        write(1, "/", 1);
			}

			write(1, "*", 1);
			c++;

			while (l == y && c == x)
                         {       
                                 write(1, "/", 1);
                         }

			/*if(c == x && l == y)
			{
				write(1, "/", 1);
			}*/
		}
		/*write(1, "\\", 1);*/
		write(1, "\n", 1);
		/*write(1, "/", 1);*/
                l++;
		c = 0;
	}
}

int	main(void)
{
	int	x;
	int 	y;
	y = 3;  /*determina a quantidade de linha*/
	x = 5;  /*determina a quantidade de coluna*/

	ft_putchar(x, y);
	return(0);
}
