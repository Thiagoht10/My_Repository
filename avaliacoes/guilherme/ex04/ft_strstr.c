/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gualmeid <gualmeid@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:24:27 by gualmeid          #+#    #+#             */
/*   Updated: 2025/03/18 15:50:00 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	s;
	int	f;
	int	a;

	s = 0;
	f = 0;
	a = 0;
	if (to_find[0] == '\0')
		return (str);
	while (to_find[a] != '\0')
		a++;
	while (str[s] != '\0')
	{
		if (str[s] != to_find[f])
			f = 0;
		if (str[s] == to_find[f])
			f++;
		s++;
		if (f == a)
		{
			s = s - a;
			return (&str[s]);
		}
	}
	return (NULL);
}

int	main(void)
{
	char	tmp[] = " bom dia de";
	char	tmp1[] = " di";

	printf("%s\n", ft_strstr(tmp, tmp1));

	return (0);
}
