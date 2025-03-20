/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirdis <nkirdis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:47:13 by nkirdis           #+#    #+#             */
/*   Updated: 2025/03/08 20:39:54 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

void test(int index, int expected)
{
	int result = ft_fibonacci(index);
	char *check = (expected == result ? "✅" : "❌");
	printf("\n%i -> %i -> %s\n", index, result, check);
}

int main(void)
{
	test(0, 0);
	test(1, 1);
	test(2, 1);
	test(3, 2);
	test(11, 89);
	test(14, 378);
	test(10, 55);
	test(-5, -1);

	return (0);
}

