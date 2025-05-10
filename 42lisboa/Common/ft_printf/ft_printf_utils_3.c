/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 18:03:55 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/10 22:13:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	repeat_char_base(const char *base)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (base[a])
	{
		if (base[a] == '+' || base[a] == '-' || base[a] < 32 || base[a] > 126)
			return (0);
		b = a + 1;
		while (base[b])
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
	}
	return (1);
}

int	putnbr_base(unsigned long n, const char *base)
{
	unsigned long	base_len;
	int				count;

	base_len = 0;
	count = 0;
	if (!base)
		return (0);
	if (!repeat_char_base(base))
	{
		return (0);
	}
	while (base[base_len])
		base_len++;
	if (base_len < 2)
		return (0);
	if (n >= base_len)
		count += putnbr_base(n / base_len, base);
	count += write(1, &base[n % base_len], 1);
	return (count);
}
