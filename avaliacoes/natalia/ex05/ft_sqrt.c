/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkirdis <nkirdis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 18:38:13 by nkirdis           #+#    #+#             */
/*   Updated: 2025/03/08 20:46:57 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}

void test(int index, int expected)
{
	int result = ft_sqrt(index);
	char *check = (expected == result ? "✅" : "❌");
	printf("\n√%i = %i -> %s\n", index, result, check);
}

int main(void)
{
	test(0, 0);
	test(1, 1);
	test(64, 7);
	test(81, 9);
	test(2, 0);
	test(5, 0);
	test(-1, 0);

	return (0);
}

