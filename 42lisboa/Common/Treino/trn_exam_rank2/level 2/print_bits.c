/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:15:09 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/16 22:02:17 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

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

	octet = 7;
	print_bits(octet);
	return (0);
}
