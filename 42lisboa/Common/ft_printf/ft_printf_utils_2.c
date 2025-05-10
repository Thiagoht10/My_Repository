/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 01:10:17 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/10 04:33:42 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_unsigned(unsigned int c)
{
	int	n;

	n = putnbr_base(c, "0123456789");
	return (n);
}

int	put_hex(unsigned int num)
{
	int	n;

	n = putnbr_base(num, "0123456789abcdef");
	return (n);
}

int	put_hex_upper(unsigned int num)
{
	int	n;

	n = putnbr_base(num, "0123456789ABCDEF");
	return (n);
}

int	put_porcent(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

void	put_format(int *a, int *total, char format)
{
	ft_putchar_fd(format, 1);
	(*total)++;
	(*a)++;
}
