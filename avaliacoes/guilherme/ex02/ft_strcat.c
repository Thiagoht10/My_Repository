/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualmeid <gualmeid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:07:53 by gualmeid          #+#    #+#             */
/*   Updated: 2025/03/18 15:40:45 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	f;

	s = 0;
	f = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	while (src[f] != '\0')
	{
		dest[s] = src[f];
		f++;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}

int	main(void)
{
	char	tmp[] = "Hello";
	char	tmp1[] = "42world";

	printf("%s\n", tmp);
	printf("%s\n", tmp1);
	printf("%s\n", ft_strcat(tmp, tmp1));
	return (0);
}
