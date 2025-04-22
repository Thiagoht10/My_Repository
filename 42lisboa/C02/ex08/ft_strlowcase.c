/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:56:40 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/05 15:28:45 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
			str[a] = str[a] + 32;
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	string[20] = "HBHKAhiudh./.-=";
	int	b;

	ft_strlowcase(string);
	b = 0;
	while (string[b] != '\0')
	{
		write(1, &string[b], 1);
		b++;
	}
	return (0);
}*/
