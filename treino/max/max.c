/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 18:44:12 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/17 19:39:36 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int	a;
	int	num;
	
	if (len == 0)
		return (0);
	a = 0;
	num = tab[0];
	while(a < len)
	{
		if (tab[a] > tab[a - 1] && tab[a] > num)
			num = tab[a];
		a++;
	}
	printf("%d\n", tab[0]);
	return (num);
}

int	main(void)
{
	int	arr[] = {};
	int	num;

	num = max(arr, 0);
	printf("%d\n", num);
	return (0);
}
