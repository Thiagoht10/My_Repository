/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:05:02 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/02 22:56:47 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_inside(int num, int *x, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (num == x[i])
			return (1);
		i++;
	}
	return (0);
}
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
	int	*sequence;
	int	size;
	int	*liss;
	int	pushed;

	pushed = 0;
	liss = lis(a, len);
	sequence = rotate_lis(&liss[0], a, len, &size);
	free(liss);
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
	int mov_b;
	int	duble_mov;
	int	final_mov;
	int	effort;

	while (b->count > 0)
	{
		duble_mov = calculate_move(a, b, &mov_a, &mov_b);
		duble_move(a, b, duble_mov);
		move_a(a, b, mov_a);
		move_b(a, b, mov_b);
		pa(a, b);
	}
	while(a->items[0] != lowest_value(a, b))
	{
		effort = less_effort(a, lowest_value(a, b), &final_mov);
		final_move(a, final_mov, effort);
	}
}
