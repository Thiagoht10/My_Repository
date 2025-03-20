/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:56:43 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/12 20:33:32 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(char	*str)
{
	int		sign;
	int		a;
	int		result;

	a = 0;
	result = 0;
	sign = 1;
	while (str[a] == ' ' || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			sign *= -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = result * 10 + (str[a] - '0');
		a++;
	}
	return (sign * result);
}

/*int	main()
{
	char	*string = " --+ -11b2";
	int	a;

	a = 0;
	a = ft_atoi(string);
	printf("%d", a);
	return(0);
}*/
