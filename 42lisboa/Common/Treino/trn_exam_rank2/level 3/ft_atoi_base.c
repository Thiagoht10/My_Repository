/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 04:40:09 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/19 21:14:38 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	char_to_val(char c)
{
	int	result;

	result = 0;
	if (c >= '0' && c <= '9')
		result = c - '0';
	else if (c >= 'A' && c <= 'F')
		result = c - 'A' + 10;
	else if (c >= 'a' && c <= 'f')
		result = c - 'a' + 10;
	else
		return (-1);
	return (result);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(const char *str)
{
	int	i;
	int	contrl;
	int	sign;

	i = 0;
	contrl = 0;
	sign = 0;
	if (str[0] == '-')
	{
		sign++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (-1);
		i++;
	}
	if (sign == 1)
		return (1);
	return (0);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	result;
	int	power;
	int	val;
	int	sign;

	i = ft_strlen(str) - 1;
	result = 0;
	power = 1;
	val = 0;
	sign = 1;
	if (check_base(str) == 1)
		sign *= -1;
	while (i >= 0)
	{
		val = char_to_val(str[i]);
		if (val == -1 && i == 0)
			break ;
		else if (val == -1)
			return (0);
		result += val * power;
		power *= str_base;
		i--;
	}
	return (result * sign);
}

int	main(void)
{
	char	*str;

	str = "1011";
	printf("%d\n", ft_atoi_base(str, 2));
	return (0);
}
