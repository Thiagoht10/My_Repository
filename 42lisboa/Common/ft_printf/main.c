/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 20:12:30 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/14 13:36:10 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	b;
	char	*num;

	a = 0;
	b = 0;
	num = NULL;
	a = ft_printf("porcent: %p\n", &num);
	printf("%d\n", a);
	b = printf("porcent: %p\n", &num);
	printf("%d\n", b);
	return (0);
}
