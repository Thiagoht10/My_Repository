#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	a;
	int	n;

	a = 0;
	n = 0;
	while (str[a])
	{
		n = n * 10 + (str[a] - '0');
		a++;
	}
	return (n);
}

char	*putnbr(int num, char *nbr)
{
	int	a;
	int	b;
	char	c;

	a = 0;
	while (num > 0)
	{
		nbr[a] = (num % 10) + '0';
		num /= 10;
		a++;
	}
	nbr[a] = '\0';
	a--;
	b = 0;
	while (b < a)
	{
		c = nbr[a];
		nbr[a] = nbr[b];
		nbr[b] = c;
		a--;
		b++;
	}
	return (nbr);
}

int	prime(int a)
{
	int	i;

	i = 2;
	while (i < a)
	{
		if (a % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int	add_prime_sum(int num)
{
	int	a;
	int	p;
	int	i;
	char	c[10];

	a = 2;
	p = 0;
	while (a <= num)
	{
		if(!prime(a))
			p = p + a;
		a++;
	}
	putnbr(p, c);
	i = 0;
	while (c[i])
		write(1, &c[i++], 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (ft_atoi(argv[1]) < 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	add_prime_sum(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
