/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ne <ncruz-ne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:31:55 by ncruz-ne          #+#    #+#             */
/*   Updated: 2025/03/18 20:05:59 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// PROTOTYPES
char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] = '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n] && to_find[i + n] != '\0')
		{
		 	if (str[i + n] == '\0')
			{
				return (&str[i]);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}

// FOR TESTING ONLY:
int	main(void)
{
	char	str1[] = "there is meow and woof";
	char	find1[] = "meow";
	char	str2[] = "there is meow and woof";
	char	find2[] = "woof";
	char	str3[] = "there is meow and woof";
	char	find3[] = "quack";
	char	str4[] = "there is meow and woof";
	char	find4[] = "";
	char	str5[] = "";
	char	find5[] = "";
	char	str6[] = "";
	char	find6[] = "meow";

	printf("(1) 'meow and woof': '%s'.\n", ft_strstr(str1, find1));
	printf("(2) 'woof': '%s'.\n", ft_strstr(str2, find2));
	printf("(3) '(null)': '%s'.\n", ft_strstr(str3, find3));
	printf("(4) 'there is meow and woof': '%s'.\n", ft_strstr(str4, find4));
	printf("(5) '': '%s'.\n", ft_strstr(str5, find5));
	printf("(5) '(null)': '%s'.\n", ft_strstr(str6, find6));
	return (0);
}
