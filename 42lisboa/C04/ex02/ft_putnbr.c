/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:59:01 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/12 20:15:34 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	over(int nc)
{
	if (nc < 0)
	{
		nc = -nc;
		write(1, "-", 1);
	}
	if (nc == -2147483648)
		write (1, "2147483648", 10);
	return (nc);
}

void	ft_putnbr(int nb)
{
	int		a;
	int		b;
	char	buff1[11];

	a = 0;
	b = over(nb);
	if (b == 0)
	{
		buff1[a] = '0';
		a++;
	}
	while (b > 0)
	{
		buff1[a] = (b % 10) + '0';
		b /= 10;
		a++;
	}
	buff1[a] = '\0';
	while (a != 0)
	{
		a--;
		write(1, &buff1[a], 1);
	}
}

/*int	main(void)
{
	int	num;

	num = 2147483647;
	ft_putnbr(num);
	return (0);
}*/
