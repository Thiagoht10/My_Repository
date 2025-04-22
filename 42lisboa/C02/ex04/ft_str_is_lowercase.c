/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:47:12 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/04 18:59:38 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
			return (0);
		a++;
	}
	return (1);
}

/*int	main()
{
	char	*string = "ddsddHUHU";
	char	b;

	b = ft_str_is_lowercase(string);
	printf("%d", b);
	return (0);
}*/
