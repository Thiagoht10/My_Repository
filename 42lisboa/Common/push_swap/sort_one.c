/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_one.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:05:02 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/06 23:12:06 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lowest_value_a(t_stack *a)
{
	int	value;
	int	i;

	i = 1;
	value = a->items[0];
	while (i < a->count)
	{
		if (a->items[i] < value)
			value = a->items[i];
		i++;
	}
	return (value);
}

void	rotate_up(t_stack *a, t_stack *b, int len)
{
	long int	*sequence;
	int			size;
	long int	*liss;
	int			pushed;

	pushed = 0;
	liss = lis(a, len);
	sequence = rotate_lis(&liss[0], a, len, &size);
	if (!sequence)
		return ;
	while (pushed < len - size)
	{
		if (!is_inside(a->items[0], sequence, size))
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
	free(liss);
	free(sequence);
}

int	lowest_value(t_stack *a, t_stack *b)
{
	int	value;
	int	i;

	i = 1;
	value = a->items[0];
	while (i < a->count)
	{
		if (a->items[i] < value)
			value = a->items[i];
		i++;
	}
	i = 1;
	while (i < b->count)
	{
		if (b->items[i] < value)
			value = b->items[i];
		i++;
	}
	return (value);
}

int	highest_value_a(t_stack *a)
{
	int	value;
	int	i;

	i = 1;
	value = a->items[0];
	while (i < a->count)
	{
		if (a->items[i] > value)
			value = a->items[i];
		i++;
	}
	return (value);
}

void	rotate_down(t_stack *a, t_stack *b)
{
	int	mov_a;
	int	mov_b;
	int	duble_mov;
	int	final_mov;
	int	effort;

	while (b->count > 0)
	{
		duble_mov = calculate_move(a, b, &mov_a, &mov_b);
		duble_move(a, b, duble_mov);
		move_a(a, mov_a);
		move_b(b, mov_b);
		pa(a, b);
	}
	while (a->items[0] != lowest_value(a, b))
	{
		effort = less_effort(a, lowest_value(a, b), &final_mov);
		final_move(a, final_mov, effort);
	}
}
