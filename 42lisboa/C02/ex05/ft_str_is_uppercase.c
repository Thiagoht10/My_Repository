/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 19:01:33 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/04 19:19:09 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || str[a] > 'Z')
			return (0);
		a++;
	}
	return (1);
}

/*int	main()
{
	char	*string = "BKJBKJB";
	int	b;

	b = ft_str_is_uppercase(string);
	printf("%d", b);
	return (0);
}*/
