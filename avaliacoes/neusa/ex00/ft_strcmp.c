/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncruz-ne <ncruz-ne@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:23:50 by ncruz-ne          #+#    #+#             */
/*   Updated: 2025/03/16 18:03:52 by ncruz-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// PROTOTYPES
int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
// FOR TESTNG ONLY:
int	main(void)
{
	printf("Result must be (-): %i\n", ft_strcmp("abc", "abb"));
	printf("Result must be (+): %i\n", ft_strcmp("abd", "abc"));
	printf("Result must be (=): %i\n", ft_strcmp("yes", "yes"));
	printf("Result must be (-): %i\n", ft_strcmp("", "yes"));
	printf("Result must be (+): %i\n", ft_strcmp("yes", ""));
	printf("Result must be (=): %i\n", ft_strcmp("", ""));
	return (0);
}*/
