/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 19:24:31 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 12:42:14 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	sw;

	sw = *a;
	*a = *b;
	*b = sw;
}

int	main(void)
{
	int	a;
	int	b;

	a = 22;
	b = 44;
	printf("%d && %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d && %d\n", a, b);
	return (0);
}
