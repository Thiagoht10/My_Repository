/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 21:20:26 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/12 22:33:50 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int				a;
	unsigned char	uc;

	uc = (unsigned char) c;
	a = 0;
	while (a < n)
	{
		((unsigned char *)s)[a] = uc;
		a++;
	}
	return (s);
}

int	main(void)
{
	char	str[15] = "abcdefghi";

	printf("%s vs %s", ft_memset(str, 32, 3), memset(str, 32, 3));
	return (0);
}
