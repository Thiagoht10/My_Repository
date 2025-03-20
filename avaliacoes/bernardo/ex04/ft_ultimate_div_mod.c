/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berduart <berduart@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:29:04 by berduart          #+#    #+#             */
/*   Updated: 2025/03/11 20:10:01 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}


int	main(void)
{
	int	c;
	int	d;

	c = 23;
	d = 2;
	ft_ultimate_div_mod(&c, &d);
	printf("Divisão: %d, Resto: %d", c, d);
	return (0);
}

