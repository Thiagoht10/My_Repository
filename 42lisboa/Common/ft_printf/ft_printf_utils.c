/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:33:41 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/08 21:56:32 by thde-sou         ###   ########.fr       */
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
	ft_putstr_fd(str, 1);
	return ((int)ft_strlen(str));
}

int	put_pointer(void *prt)
{
	unsigned long	address;
	int				total;

	address = (unsigned long)prt;
	write(1, "0x", 2);
	total = putnbr_base(address, "0123456789abcdef");
	return (total + 2);
}

int	putnbr_base(unsigned long n, const char *base)
{
	unsigned long	base_len;
	int				count;

	base_len = 0;
	count = 0;
	while (base[base_len])
		base_len++;
	if (n >= base_len)
		count += putnbr_base(n / base_len, base);
	count += write(1, &base[n % base_len], 1);
	return (count);
}
