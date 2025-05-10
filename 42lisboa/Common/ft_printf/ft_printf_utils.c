/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:33:41 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/10 18:32:40 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	put_str(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return ((int)ft_strlen(str));
}

int	put_pointer(void *prt)
{
	unsigned long	address;
	int				total;

	if (!prt)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	address = (unsigned long)prt;
	write(1, "0x", 2);
	total = putnbr_base(address, "0123456789abcdef");
	return (total + 2);
}

int	put_int(int n)
{
	int			count;
	long int	un;

	count = 0;
	un = (long int)n;
	if (un < 0)
	{
		write(1, "-", 1);
		count++;
		un = -un;
	}
	count += putnbr_base((unsigned long)un, "0123456789");
	return (count);
}
