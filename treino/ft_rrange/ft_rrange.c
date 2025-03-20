#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	x;
	int	a;
	int	*num;
	int	y;

	y = end;
	x = end - start + 1;
	if (x < 0)
	{
		x *= -1;
		x = x + 2;
	}
	num = malloc(x * sizeof(int));
	a = 0;
	while (a < x)
	{
		num[a] = y;
		a++;
		if (end < 0)
			y++;
		else
			y--;
	}
	return (num);
}

int	main(void)
{
	int	a;
	int	x;
	int	c;
	int	d;
	int	*range;

	c = 6;
	d = 0;
	x = c - d + 1;
        if (x < 0)
	{
                x *= -1;
                x = x + 2;
        }
	range = ft_rrange(d, c);
	
	a = 0;
	while (x > a)
	{
		printf("%d", range[a]);
		a++;
	}
	return(0);
}
