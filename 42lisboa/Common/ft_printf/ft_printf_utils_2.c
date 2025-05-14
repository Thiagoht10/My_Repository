/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 01:10:17 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/14 22:01:10 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned(unsigned int c)
{
	char	*str;
	int		count;

	str = ft_itoa_base(c, "0123456789");
	if (!str)
		return (0);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}

int	put_hex(unsigned int num)
{
	int		count;
	char	*str;

	str = ft_itoa_base(num, "0123456789abcdef");
	if (!str)
		return (0);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}

int	put_hex_upper(unsigned int num)
{
	int		count;
	char	*str;

	str = ft_itoa_base(num, "0123456789ABCDEF");
	if (!str)
		return (0);
	count = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free(str);
	return (count);
}

void	put_porcent(char c)
{
	ft_putchar_fd(c, 1);
}

void	put_format(int *a, int *total, char format)
{
	ft_putchar_fd(format, 1);
	(*total)++;
	(*a)++;
}
