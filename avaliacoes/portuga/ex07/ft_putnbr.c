/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportuga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:36:07 by pportuga          #+#    #+#             */
/*   Updated: 2025/03/11 21:08:04 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_special_cases(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb == 2147483647)
		write (1, "2147483647", 10);
	else if (nb == 0)
		write (1, "0", 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	char	c;

	i = 0;
	ft_special_cases(nb);
	if (nb != 0 && nb != -2147483648 && nb != 2147483647)
	{
		while (nb != 0)
		{
			i = nb % 10 + i * 10;
			nb = nb / 10;
		}
		while (i != 0)
		{
			if (i < 0)
			{
				write (1, "-", 1);
				i = -i;
			}
			c = (i % 10) + 48;
			i = i / 10;
			write (1, &c, 1);
		}
	}
}

/*int	main(void)
{
	int	nb;

	nb = 83647;
	ft_putnbr(nb);
	return (0);
}*/
