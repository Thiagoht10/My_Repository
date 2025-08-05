/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:32:48 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/05 16:01:19 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *a, t_stack *b)
{
	int	min1;
	int	min2;

	min1 = stack_min(a);
	min2 = stack_second_min(a);
	if (check_sort(a))
		return ;
	while (a->count > 3)
	{
		if (a->count == 4)
			min1 = lowest_value_a(a);
		if ((a->items[0] == min1 || a->items[0] == min2) && a->count == 5)
			pb(a, b);
		else if (a->items[0] == min1 && a->count == 4)
			pb(a, b);
		else
			ra(a);
	}
	sort_three_small(a);
	if (b->count == 2 && b->items[0] < b->items[1])
		sb(b);
	pa(a, b);
	pa(a, b);
}

void	call_function(t_stack *a, t_stack *b, int len)
{
	if (a->count <= 3)
		sort_three_small(a);
	else if (a->count > 3 && a->count <= 5)
		sort_five(a, b);
	if (a->count > 5)
	{
		rotate_up(a, b, len);
		rotate_down(a, b);
	}
}
