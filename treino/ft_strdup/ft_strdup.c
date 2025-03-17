#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	strleng(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	int	a;
	char	*nova = malloc(strleng(src) + 1);

	if (nova == NULL)
	{
		write(1, "erro na memoria", 15);
		return (NULL);
	}
	a = 0;
	while(src[a] != '\0')
	{
		nova[a] = src[a];
		a++;
	}
	nova[a] = '\0';
	return (nova);
}

int	main(void)
{
	char	*string;
	char	*c;

	string = "abcd";
	c = ft_strdup(string);
	printf("%s\n", c);
	return (0);
}
