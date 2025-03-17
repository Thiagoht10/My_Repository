#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	a;
	int	sign;
	int	result;

	a = 0;
	sign = 1;
	result = 0;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	if (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = result * 10 + str[a] - '0';
		a++;
	}
	return (sign * result);
}

int	main(void)
{
	char	*string = "-120";
	int	num;

	num = ft_atoi(string);
	printf("%d\n", num);
	return (0);
}
