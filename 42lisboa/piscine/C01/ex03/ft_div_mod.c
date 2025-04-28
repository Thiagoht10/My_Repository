/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 10:07:36 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/03 20:18:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int	c;
	int	d;
	
	c = 21;
	d = 7;

	ft_div_mod(c, d, &c, &d);
	printf("O resultado da divisão é %d\n", c);
	printf("O resto da divisão é %d\n", d);
	return (0);
}*/
