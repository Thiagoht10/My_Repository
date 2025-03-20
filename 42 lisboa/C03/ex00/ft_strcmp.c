/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:38:29 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/06 10:43:18 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;
	int	b;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			return (b);
		}
		a++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1 = "aCb";
	char	*str2 = "abb";
	int	c;

	c = ft_strcmp(str1, str2);
	printf("%d",c);
	return(0);
}*/
