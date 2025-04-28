/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 16:19:45 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/12 17:26:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (nb + 1);
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}

/*int	main()
{
	int	b;

	b = ft_recursive_factorial(3);
	printf("%d", b);
	return (0);
}*/
