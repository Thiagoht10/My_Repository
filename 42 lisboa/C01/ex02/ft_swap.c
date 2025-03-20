/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:24:49 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/03 20:00:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	int	d;

	d = *b;
	c = *a;
	*b = c;
	*a = d;
}

/*int	main(void)
{
	int	p = 20;
	int	q = 25;

	printf("Seu número é %d e %d\n", p, q);
	ft_swap(&p, &q);
	printf("Seu numero é %d e %d\n", p, q);
}*/
