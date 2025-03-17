#include <stdio.h>
#include <unistd.h>
int	loop(int a, char *str)
{
	int	c;

	c = 0;
	while ((a - c) > 0)
	{
		c++;
		if (str[a - c] == str[a])
		{   
			return(1);
		}
	}
	return (0);
}

char	*inter(char *str1, char *str2)
{
	int	a;
	int	b;

	a = 0;
	while (str1[a] != '\0')
	{
		b = 0;
		while (str2[b] != '\0')
		{
			if(str1[a] == str2[b] && !loop(a, str1))
			{
				write(1, &str1[a], 1);
				break;
			}
			b++;
		}
		a++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(void)
{
	char	str1[] = "aatccbf";
	char	str2[] = "caabt";

	inter(str1, str2);
	return (0);
}
