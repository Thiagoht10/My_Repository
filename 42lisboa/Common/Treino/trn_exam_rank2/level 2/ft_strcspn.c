/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:32:33 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/13 17:43:57 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i;
	int		y;
	size_t	occ;

	i = 0;
	occ = 0;
	while (reject[i] != '\0')
	{
		y = 0;
		while (1)
		{
			if (s[y] == reject[i] || s[y] == '\0')
			{
				if ((i == 0 && (s[y] == reject[i] || s[y] == '\0')) || (i > 0
						&& y < occ))
					occ = y;
				break ;
			}
			y++;
		}
		i++;
	}
	return (occ);
}

int	main(void)
{
	char	*s;
	char	*reject;

	s = "abacaxi";
	reject = "xc";
	printf("%ld\n", strcspn(s, reject));
	printf("%ld\n", ft_strcspn(s, reject));
	return (0);
}
