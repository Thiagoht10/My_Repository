/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 13:46:24 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/17 18:57:11 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	int	result;

	result = (octet >> 4) | (octet << 4);
	return (result);
}

void	print_bits(unsigned char octet)
{
	int	a;

	a = 8;
	while(a > 0)
	{
		printf("%d", (octet >> (a - 1)) & 1);
		a--;
	}
	printf("\n");
}

int	main(void)
{
	unsigned char byte = 0b00100110;
	unsigned char invertido;

	invertido = swap_bits(byte);
	print_bits(byte);
	print_bits(invertido);
	return (0);
}
