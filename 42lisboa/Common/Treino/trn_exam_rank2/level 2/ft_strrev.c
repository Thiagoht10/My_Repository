/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 18:31:28 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/14 20:15:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	printf("%d\n", i);
	while (i > j)
	{
		c = str[j];
		str[j] = str[i];
		str[i] = c;
		j++;
		i--;
	}
	return (str);
}

/* int	main(void)
{
	char str[] = "Thiago";

	printf("%s\n", ft_strrev(str));
	return (0);
} */
