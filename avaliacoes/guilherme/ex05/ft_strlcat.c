/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualmeid <gualmeid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:09:26 by gualmeid          #+#    #+#             */
/*   Updated: 2025/03/18 15:54:54 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	f;
	unsigned int	dest_l;
	unsigned int	src_l;

	s = 0;
	f = 0;
	while (dest[s] != '\0')
		s++;
	dest_l = s;
	while (src[f] != '\0' && f <= size)
	{
		dest[s] = src[f];
		s++;
		f++;
	}
	src_l = f;
	if (dest_l <= size)
		return (src_l + size);
	if (dest_l > size)
		return (dest_l + size);
	return (0);
}

int	main(void)
{
	char	tmp[] = "animal";
	char	tmp1[] = "aveaaaaiiiii";

	unsigned int	a;

	a = 6;

	printf("%d\n", ft_strlcat(tmp, tmp1, a));
	return (0);
	
}
