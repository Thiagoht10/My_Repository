/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ne <ncruz-ne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 14:22:35 by ncruz-ne          #+#    #+#             */
/*   Updated: 2025/03/17 21:07:42 by ncruz-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// PROTOTYPES
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && i + n < size - 1 && size != 0)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	while (src[n] != '\0')
		n++;
	return (i + n);
}
/*
// FOR TESTING ONLY:
int	main(void)
{
	char	dest1[] = "meow and"; // length = 8, size = 9.
	char	dest2[] = "meow and";
	char	dest3[] = "meow and";
	char	dest4[] = "meow and";
	char	dest5[] = "meow and";
	char	dest6[] = "";
	unsigned int	n;

	n = ft_strlcat(dest1, " woof", 14);
	printf("(1) 'meow and woof': '%s'. Return (13): %u\n", dest1, n);
	n = ft_strlcat(dest2, " woof", 11);
	printf("(2) 'meow and w': '%s'. Return (13): %u\n", dest2, n);
	n = ft_strlcat(dest3, " woof", 20);
	printf("(3) 'meow and woof': '%s'. Return (13): %u\n", dest3, n);
	n = ft_strlcat(dest4, " woof", 0);
	printf("(4) 'meow and': '%s'. Return (13): %u\n", dest4, n);
	n = ft_strlcat(dest5, "", 20);
	printf("(5) 'meow and': '%s'. Return (8): %u\n", dest5, n);
	n = ft_strlcat(dest6, "woof", 4);
	printf("(6) 'woo': '%s'. Return (4): %u\n", dest6, n);
	return (0);
}*/
