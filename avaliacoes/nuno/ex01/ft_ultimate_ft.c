/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsilveri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:54:11 by nsilveri          #+#    #+#             */
/*   Updated: 2025/03/09 18:11:47 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}


int	main(void)
{
	int	x = 10;

	int*	p1 = &x;
	int**	p2 = &p1;
	int***	p3 = &p2;
	int****	p4 = &p3;
	int*****	p5 = &p4;
	int******	p6 = &p5;
	int*******	p7 = &p6;
	int********	p8 = &p7;
	int*********	p9 = &p8;

	ft_ultimate_ft(p9);

	printf("Your value is %d\n", x);
}

