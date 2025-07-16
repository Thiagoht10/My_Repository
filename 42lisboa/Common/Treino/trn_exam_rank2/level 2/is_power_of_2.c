/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 04:54:01 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/16 05:43:10 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int	num;

	num = 0;
	if (n == 0)
		return (0);
	num = n & (n - 1);
	if (num == 0)
		return (1);
	return (0);
}

int	main(void)
{
	unsigned int	num;

	num = 32;
	printf("%d", is_power_of_2(num));
	return (0);
}
