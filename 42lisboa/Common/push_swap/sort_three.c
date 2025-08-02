/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 04:14:27 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/02 08:13:03 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static int	aux_calculate(t_stack *a, t_stack *b, int i, t_effort *e)
{
	e->mov_duble = 0;
	e->mov_b = join_effort(a, b, &e->mov_a, b->items[i]);
	while (e->mov_a > 0 && e->mov_b > 0)
	{
		e->mov_b--;
		e->mov_a--;
		e->mov_duble++;
	}
	while (e->mov_a < 0 && e->mov_b < 0)
	{
		e->mov_b++;
		e->mov_a++;
		e->mov_duble++;
	}
	return (ft_abs(e->mov_a) + ft_abs(e->mov_b) + e->mov_duble);
}

int	calculate_effort(t_stack *a, t_stack *b, int *index)
{
	int			i;
	int			tmp;
	int			result;
	t_effort	e;

	i = 0;
	result = b->count + a->count;
	while (i < b->count)
	{
		tmp = aux_calculate(a, b, i, &e);
		if (tmp < result)
		{
			result = tmp;
			*index = i;
		}
		i++;
	}
	return (result + 1);
}

int calculate_move(t_stack *a, t_stack *b, int *mov_a, int *mov_b)
{
    int duble_mov;
    int index;
    int effort;
    t_move move;

    duble_mov = 0;
    effort = calculate_effort(a, b, &index);
    move.mov_b = join_effort(a, b, &move.mov_a, b->items[index]);
    while(move.mov_a > 0 && move.mov_b > 0)
    {
        move.mov_a--;
        move.mov_b--;
        duble_mov++;
    }
    while (move.mov_a < 0 && move.mov_b < 0)
    {
        move.mov_a++;
        move.mov_b++;
        duble_mov--;
    }
    *mov_a = move.mov_a;
    *mov_b = move.mov_b;
    return (duble_mov);
}
