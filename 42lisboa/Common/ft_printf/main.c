/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:12:30 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/10 03:52:39 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	b;
	int	num;

	a = 0;
	b = 0;
	num = 522;
	a = ft_printf("porcent: %i\n", num);
	printf("%d\n", a);
	b = printf("porcent: %i\n", num);
	printf("%d\n", b);
	return (0);
}
