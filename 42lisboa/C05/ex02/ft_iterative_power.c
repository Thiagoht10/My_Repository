/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:28:47 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/18 12:14:16 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	static int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * a;
		power--;
	}
	return (nb);
}

/*int	main()
{
	printf("%d\n", ft_iterative_power(2, 2));
	return (0);
}*/
