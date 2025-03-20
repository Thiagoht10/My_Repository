/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:48:33 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/09 17:19:49 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			a = str;
			b = to_find;
			while ((*a == *b) && (*a) && (*b))
			{
				a++;
				b++;
			}
			if (*b == '\0')
				return (str);
		}
		str++;
	}
	return (NULL);
}
 
int	main(void)
{
	char str[] = "ola bom dia";
	char to_find[] = "ta";

	char *p = ft_strstr(str, to_find);
	printf("%s",p);
}
