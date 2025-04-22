/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:37:05 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/18 17:14:13 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	raiz;

	raiz = 1;
	if (raiz < 0)
		return (0);
	while (raiz * raiz <= nb)
	{
		if (raiz * raiz == nb)
			return (raiz);
		raiz++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	return (0);
}*/
