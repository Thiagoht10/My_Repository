/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 21:45:36 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/16 22:03:49 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	result;

	i = 0;
	result = 0;
	while (i < 8)
	{
		if ((octet >> i) & 1)
		{
			result = result | (1 << (7 - i));
		}
		i++;
	}
	return (result);
}

void	print_bits(unsigned char octet)
{
	int		max_bits;
	char	bits;

	max_bits = 7;
	while (max_bits >= 0)
	{
		bits = ((octet >> max_bits) & 1) + '0';
		write(1, &bits, 1);
		max_bits--;
	}
}

int	main(void)
{
	unsigned char	octet;
	unsigned char	result;

	octet = 13;
	result = reverse_bits(octet);
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(result);
	return (0);
}
