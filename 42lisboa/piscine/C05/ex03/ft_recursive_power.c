/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:16:30 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/18 13:16:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		nb = a * ft_recursive_power(nb, power - 1);
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_power(3, 3));
	return (0);
}*/
