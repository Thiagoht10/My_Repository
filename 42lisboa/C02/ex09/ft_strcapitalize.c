/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:20:19 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/06 09:23:21 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[a] -= 32;
		while (str[a] < '0' || (str[a] > '9' && str[a] < 'A')
			|| (str[a] > 'Z' && str[a] < 'a') || str[a] > 'z')
		{
			a++;
			if (str[a] == '\0')
				return (str);
			if (str[a] >= 'a' && str[a] <= 'z')
				str[a] -= 32;
		}
		a++;
		while (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
			a++;
		}
	}
	return (str);
}

/*int	main(void)
{
	char	stri[] = "ola, tUDo bem? 42palavras quaREnta-e-dUas; cinqUEnta+e+um";

	ft_strcapitalize(stri);
	printf("%s", stri);
	return (0);
}*/
