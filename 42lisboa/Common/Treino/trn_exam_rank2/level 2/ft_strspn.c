/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 19:25:47 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/14 20:14:48 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int		i;
	int		j;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (1)
		{
			if (s[i] == accept[j])
			{
				count++;
				break ;
			}
			else if (accept[j] == '\0')
				return (count);
			j++;
		}
		i++;
	}
	return (count);
}

int	main(void)
{
	char	*s;
	char	*accept;

	s = "abacaxi";
	accept = "abci";
	printf("%ld\n", strspn(s, accept));
	printf("%ld\n", ft_strspn(s, accept));
	return (0);
}
