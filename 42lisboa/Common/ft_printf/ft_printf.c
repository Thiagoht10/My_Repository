/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:08:15 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/10 04:38:55 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (put_char(va_arg(args, int)));
	else if (format == 's')
		return (put_str(va_arg(args, char *)));
	else if (format == 'p')
		return (put_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (put_int(va_arg(args, int)));
	else if (format == 'u')
		return (put_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (put_hex(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (put_hex_upper(va_arg(args, unsigned int)));
	else if (format == '%')
		return (put_porcent('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		a;
	int		total;

	a = 0;
	total = 0;
	if (!format)
		return (0);
	va_start(args, format);
	while (format[a])
	{
		if (format[a] == '%' && format[a + 1])
		{
			total += ft_format(args, format[a + 1]);
			a += 2;
		}
		else if (format[a] == '%' && !format[a + 1])
			break ;
		else
			put_format(&a, &total, format[a]);
	}
	va_end(args);
	return (total);
}
