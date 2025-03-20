/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:15:32 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/10 14:48:45 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && to_find[b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (&str[a]);
		if (str[a] != '\0')
			a++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	string[] = "Olá bom dia";
	char	sub_string[] = "";
	char	*resultado;

	resultado = ft_strstr(string, sub_string);
	printf("%s", resultado);

	return (0);
}*/
