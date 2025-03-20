/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:59:02 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/04 18:14:13 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'A' || (str[a] > 'Z' && str[a] < 'a') || str[a] > 'z')
			return (0);
		a++;
	}
	return (1);
}

/*int	main()
{
	char	*string = "";
	int	x;

	x = ft_str_is_alpha(string);
	printf("%d", x);
	return(0);
}*/
