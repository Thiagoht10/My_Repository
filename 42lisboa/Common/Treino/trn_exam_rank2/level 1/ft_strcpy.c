/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:57:37 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/10 22:24:46 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s2[a])
	{
		s1[a] = s2[a];
		a++;
	}
	s1[a] = '\0';
	return (s1);
}

int	main(void)
{
	char	*src;
	char	dst[10];

	src = "abacaxi";
	ft_strcpy(dst, src);
	printf("%s", dst);
	return (0);
}
