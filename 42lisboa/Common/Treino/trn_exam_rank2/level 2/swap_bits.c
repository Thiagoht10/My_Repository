/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 04:37:31 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/17 04:49:16 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char	result;

	result = ((octet >> 4) | (octet << 4));
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

	octet = 124;
	result = swap_bits(octet);
	print_bits(octet);
	write(1, "\n", 1);
	print_bits(result);
	printf("\n%d", result);
	return (0);
}
