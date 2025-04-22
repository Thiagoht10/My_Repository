/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 20:26:38 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/18 19:27:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		if (s1[a] == '\0' && s2[a] == '\0')
			return (0);
		a++;
	}
	return (0);
}

/*int     main(void)
{
        char    *str1 = "banna";
        char    *str2 = "baNa";
        int     b = 2;

        printf("%d vs %d", strncmp(str1, str2, b), ft_strncmp(str1, str2, b));
        return (0);
}*/
