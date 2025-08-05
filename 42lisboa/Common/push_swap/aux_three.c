/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_three.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:07:40 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/05 16:01:46 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort(t_stack *x)
{
	int	i;
	int	not_sorted;

	i = 1;
	not_sorted = 0;
	while (i < x->count)
	{
		if (x->items[i] < x->items[i - 1])
			not_sorted++;
		i++;
	}
	if (not_sorted > 0)
		return (0);
	return (1);
}
