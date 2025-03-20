/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirdis <nkirdis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:17:34 by nkirdis           #+#    #+#             */
/*   Updated: 2025/03/08 20:10:16 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

void test(int num, int expected)
{
	int result = ft_iterative_factorial(num);
	char *check = (expected == result ? "✅" : "❌");
	printf("\n%i -> %i -> %s\n", num, result, check);
}

int main(void)
{
	test(-1, 0);
	test(1, 1);
	test(2, 2);
	test(3, 6);
	test(7, 5029);

	return (0);
}
