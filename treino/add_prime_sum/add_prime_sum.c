/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:38:26 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/18 21:17:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	prime(int a)
{
	int	i;

	i = 2;
	while (i < a)
	{
		if (a % i == 0)
			return (1);
		i++;
	}
	return (0);
}

int	add_prime_sum(int num)
{
	int	a;
	int	p;

	a = 2;
	p = 0;
	while (a <= num)
	{
		if(!prime(a))
			p = p + a;
		a++;
	}		
	return (p);
}

int	main(void)
{
	printf("%d\n", add_prime_sum(7));
	return (0);
}
