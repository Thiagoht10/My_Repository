/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:44:49 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/10 13:58:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	a;
	int unsigned	b;

	a = 0;
	b = 0;
	while (a < n)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			return (b);
		}
		if (s1[a] == '\0' && s2[a] == '\0')
			return (0);
		a++;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1 = "abc";
	char	*str2 = "aB";
	int	b;
	unsigned int	c = 2;

	b = ft_strncmp(str1, str2, c);
	printf("%d", b);	
	return (0);
}*/
