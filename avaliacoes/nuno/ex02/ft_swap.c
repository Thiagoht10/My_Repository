/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilveri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:07:30 by nsilveri          #+#    #+#             */
/*   Updated: 2025/03/09 18:14:34 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}


int	main(void)
{
	int	c = 10;
	int	d = 20;

	printf("A is %d and B is %d\n", c, d);

	ft_swap(&c, &d);

	printf("A is now %d and B is now %d\n", c, d);
}

