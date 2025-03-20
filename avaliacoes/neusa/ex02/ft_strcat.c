/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ne <ncruz-ne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 21:15:33 by ncruz-ne          #+#    #+#             */
/*   Updated: 2025/03/16 18:23:59 by ncruz-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// PROTOTYPES
char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[n] != '\0')
		n++;
	while (src[i] != '\0')
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
	char	dest1[] = "";
	char	src2[] = "there!";
	char	dest2[] = "Hello ";
	char	src3[] = " 1994";
	char	dest3[] = "18 Jan";
	char	src4[] = "";
	char	dest4[] = "src4 is empty";
	char	src5[] = "dest5 is empty";
	char	dest5[] = "";

	printf("Test 1: '%s'\n", ft_strcat(dest1, src1));
	printf("Test 2: '%s'\n", ft_strcat(dest2, src2));
	printf("Test 3: '%s'\n", ft_strcat(dest3, src3));
	printf("Test 4: '%s'\n", ft_strcat(dest4, src4));
	printf("Test 5: '%s'\n", ft_strcat(dest5, src5));
	return (0);
}*/
