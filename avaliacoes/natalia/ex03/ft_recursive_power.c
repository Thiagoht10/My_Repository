/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirdis <nkirdis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:18:57 by nkirdis           #+#    #+#             */
/*   Updated: 2025/03/08 20:31:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}


void test(int num, int power, int expected)
{
	int result = ft_recursive_power(num, power);
	char *check = (expected == result ? "✅" : "❌");
	printf("\n%i ^^ %i = %i -> %s\n", num, power, result, check);
}

int main(void)
{
	test(1, 3, 2);
	test(0, 0, 0);
	test(3, -2, 0);
	test(4, 2, 16);
	test(0, 5, 0);
	test(1, 100, 1);

	return (0);
}

