/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:26:41 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/05 13:44:40 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < ' ' || str[a] == 127)
			return (0);
		a++;
	}
	return (1);
}

/*int	main(void)
{
	char	*string = "\r";
	int	b;

	b = ft_str_is_printable(string);
	printf("%d", b);
	return (0);
}*/
