#include <unistd.h>
#include <stdio.h>

char	*putnbr(char *nbr, int num)
{
	int	a;
	int	b;
	char	c;

	a = 0;
	b = 0;
	while (num > 0)
	{
		nbr[a] = (num % 10) + '0';
		num /= 10;
		a++;
	}
	a--;
	while (b < a)
	{
		c = nbr[a];
		nbr[a] = nbr[b];
		nbr[b] = c;
		b++;
		a--;
	}
	return (nbr);
}

int	main(void)
{
	int	x;
	char	c[3];

	x = 1;
	while (x <= 100)
	{
		putnbr(c, x);
		if (x % 28 == 0)
			write(1, "FizzBuzz\n", 9);
		else if (x % 4 == 0)
			write(1, "Fizz\n", 5);
		else if (x % 7 == 0)
			write(1, "Buzz\n", 5);
		else
		{
			write(1, c, 3);
			write(1, "\n", 1);
		}
		x++;
	}
	return (0);
}
