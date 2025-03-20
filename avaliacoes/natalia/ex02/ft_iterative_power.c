/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirdis <nkirdis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:32:24 by nkirdis           #+#    #+#             */
/*   Updated: 2025/03/08 20:28:30 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		result *= nb;
		power--;
	}
	return (result);
}

void test(int num, int pow, int expected)
{
	int result = ft_iterative_power(num, pow);
	char *check = (expected == result ? "✅" : "❌");
	printf("\n%i ^^ %i = %i -> %s\n", num, pow, result, check);
}

int main(void)
{
	test(0, 0, 0);
	test(5, 0, 1);
	test(3, -2, 0);
	test(4, 3, 64);
	test(0, 5, 0);
	test(1, 100, 1);

	return (0);
}

