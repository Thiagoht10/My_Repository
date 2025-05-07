/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:08:15 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/07 23:10:53 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int    ft_format(va_list args, const char format)
{
    if (format == 'c')
        return (put_char(va_arg(args, int)));
    return (0);
}

int     ft_printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int     a;
    int     total;

    a = 0;
    total = 0;
    while (format[a])
    {
        if (format[a] == '%' && format[a + 1])
        {
            total += ft_format(args, format[a + 1]);
            a += 2;
        }
        else
        {
            ft_putchar_fd(format[a], 1);
            total++;
            a++;
        }
    }
    va_end(args);
    return (total);
}