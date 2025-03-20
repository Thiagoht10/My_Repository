/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilveri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:18:10 by nsilveri          #+#    #+#             */
/*   Updated: 2025/03/09 18:18:06 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int	main(void)
{
	int	a = 12;
	int	b = 3;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);

	printf("The value of div is %d and mod is %d", div, mod);
}

