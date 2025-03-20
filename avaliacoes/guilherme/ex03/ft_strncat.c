/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualmeid <gualmeid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 15:06:12 by gualmeid          #+#    #+#             */
/*   Updated: 2025/03/18 15:44:04 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	f;

	s = 0;
	f = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	while (f < nb && src[f] != '\0')
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
	char	tmp[] = "hello";
	char	tmp1[] = "42hello";
	unsigned int	tmp2;

	tmp2 = 10;

	printf("%s\n", ft_strncat(tmp, tmp1, tmp2));
	return (0);
}
