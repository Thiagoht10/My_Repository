/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ne <ncruz-ne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:30:05 by ncruz-ne          #+#    #+#             */
/*   Updated: 2025/03/18 19:58:14 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// PROTOTYPES:
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// FOR TESTING ONLY:
int	main(void)
{
	printf("Must be (0): %i\n", ft_strncmp("HelLO WoRlD", "Hello Worlds", 3));
	printf("Must be (0): %i\n", ft_strncmp("", "", 4));
	printf("Must be (0): %i\n", ft_strncmp("oy mate", "hi friend", 0));
	printf("Must be (-1): %i\n", ft_strncmp("HelLO WoRlD", "Hello World", 10));
	printf("Must be (-1): %i\n", ft_strncmp("Great", "Groot", 4));
	printf("Must be (+1): %i\n", ft_strncmp("Groot", "Great", 4));
	printf("Must be (-1): %i\n", ft_strncmp("", "aaaa", 2));
	printf("Must be (+1): %i\n", ft_strncmp("aaaa", "aaa", 5));
	return (0);
}
