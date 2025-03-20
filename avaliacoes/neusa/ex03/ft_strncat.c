/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ne <ncruz-ne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:41:10 by ncruz-ne          #+#    #+#             */
/*   Updated: 2025/03/16 12:32:41 by ncruz-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// PROTOTYPES
char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0' && i < nb)
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
/*
// FOR TESTING ONLY:
int	main(void)
{
	char	src1[] = "";
	char	dest1[] = "src1 starts empty.";
	char	src2[] = "dest2 starts empty.";
	char	dest2[] = "";
	char	src3[] = "I'm truncated.";
	char	dest3[] = "src3'll be truncated: ";
	char	src4[] = "space.";
	char	dest4[] = "nb has extra ";
	char	src5[] = "";
	char	dest5[] = "";
	char	src6[] = " necessary space.";
	char	dest6[] = "nb is the exact";
	char	src7[] = "nb is zero, so ";
	char	dest7[] = "we can only see dest7.";

	printf("Test 1: '%s'\n", ft_strncat(dest1, src1, 20));
	printf("Test 2: '%s'\n", ft_strncat(dest2, src2, 22));
	printf("Test 3: '%s'\n", ft_strncat(dest3, src3, 12));
	printf("Test 4: '%s'\n", ft_strncat(dest4, src4, 10));
	printf("Test 5 (both empty): '%s'\n", ft_strncat(dest5, src5, 5));
	printf("Test 6: '%s'\n",ft_strncat(dest6, src6, 17));
	printf("Test 7: '%s'\n", ft_strncat(dest7, src7, 0));
	return (0);
}*/
