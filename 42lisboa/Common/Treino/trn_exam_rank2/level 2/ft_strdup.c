/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:27:23 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/14 20:14:11 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	str = malloc(i * sizeof(char));
	if (!str)
		return (NULL);
	while (src[j] != '\0')
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

int	main(void)
{
	char	*str;
	char	*prt;
	int		i;
	int		y;

	i = 0;
	y = 0;
	str = "abacaxi";
	prt = ft_strdup(str);
	while (prt[i] != '\0')
		i++;
	while (i >= 0)
	{
		printf(" %c", prt[y]);
		i--;
		y++;
	}
	return (0);
}
