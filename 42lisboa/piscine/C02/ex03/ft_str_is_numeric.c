/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:18:25 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/04 18:45:08 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_str_is_numeric(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < '0' || str[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/*int	main()
{
	char	*string = "767dfg63745";
	int	b;

	b = ft_str_is_numeric(string);
	printf("%d", b);
	return(0);
}*/
