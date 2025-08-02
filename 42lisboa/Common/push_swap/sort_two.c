/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 20:57:07 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/02 21:54:57 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	subsequent_value(int n, t_stack *a, t_stack *b)
{
	int	i;
	int	j;
	int	value;

	i = 0;
	value = highest_value_a(a);
	while (i < a->count)
	{
		if (a->items[i] < value && a->items[i] > n)
			value = a->items[i];
        if(n > value)
            value = lowest_value_a(a);
		i++;
	}
	return (value);
}

int	found_index(t_stack *x, int value)
{
	int	i;

	i = 0;
	while (i < x->count)
	{
		if (x->items[i] == value)
			break ;
		i++;
	}
	return (i);
}

int	less_effort(t_stack *x, int value, int *move)
{
	int	index;
	int	mov;
	int	i;

	index = found_index(x, value);
	mov = 0;
	i = index;
	if (index > x->count / 2)
	{
		while (i < x->count)
		{
			mov++;
			i++;
		}
		*move = mov;
		return (2);
	}
	while (i > 0)
	{
		mov++;
		i--;
	}
	*move = mov;
	return (1);
}

int	join_effort(t_stack *a, t_stack *b, int *mov_a, int num)
{
	int	n;
	int	e_a;
	int	e_b;
	int	mv_a;
	int	mv_b;

	n = subsequent_value(num, a, b);
	e_a = less_effort(a, n, &mv_a);
	e_b = less_effort(b, num, &mv_b);
	if (e_a == 2)
		*mov_a = mv_a * (-1);
	else
		*mov_a = mv_a;
	if (e_b == 2)
		return (mv_b * (-1));
	else
		return (mv_b);
}
