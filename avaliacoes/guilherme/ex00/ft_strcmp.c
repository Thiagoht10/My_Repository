/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualmeid <gualmeid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:58:38 by gualmeid          #+#    #+#             */
/*   Updated: 2025/03/18 15:23:19 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	s;

	s = 0;
	while (s1[s] != '\0')
	{
		if (s1[s] != s2[s])
			return ((int)(s1[s] - s2[s]));
		s++;
	}
	if (s1[s] != s2[s])
		return ((int)(s1[s] - s2[s]));
	return (0);
}

int	main(void)
{
	char	str[] = "abc";
	char	str1[] = "abc";

	printf("%d\n", ft_strcmp(str, str1));
	return (0);

}
