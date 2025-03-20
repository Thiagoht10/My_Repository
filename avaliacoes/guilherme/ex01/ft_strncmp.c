/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualmeid <gualmeid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:16:13 by gualmeid          #+#    #+#             */
/*   Updated: 2025/03/18 15:37:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	s;

	if (n == 0)
		return (0);
	s = 0;
	while (s < n && s1[s] != '\0')
	{
		if (s1[s] != s2[s])
			return ((int)(s1[s] - s2[s]));
		s++;
	}
	if (s < n)
	{
		return (s1[s] - s2[s]);
	}
	return (0);
}

int	main(void)
{
	char	str[] = "abc";
	char	str1[] = "abcd";
	int	sise;

	sise = 4;
	printf("%d\n", ft_strncmp(str, str1, sise));
	return (0);
}
