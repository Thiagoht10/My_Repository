/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirdis <nkirdis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:50:36 by nkirdis           #+#    #+#             */
/*   Updated: 2025/03/08 20:16:46 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

void test(int num, int expected)
{
	int result = ft_recursive_factorial(num);
	char *check = (expected == result ? "✅" : "❌");
	printf("\n%i -> %i -> %s\n", num, expected, check);
}

int main(void)
{
	test(-1, 0);
	test(1, 1);
	test(2, 2);
	test(3, 6);
	test(5, 121);

	return (0);
}

