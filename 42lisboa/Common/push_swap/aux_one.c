/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 22:40:36 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/03 16:16:56 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	duble_move(t_stack *a, t_stack *b, int duble_mov)
{
	if (duble_mov > 0)
	{
		while (duble_mov > 0)
		{
			rr(a, b);
			duble_mov--;
		}
	}
	else
	{
		while (duble_mov < 0)
		{
			rrr(a, b);
			duble_mov++;
		}
	}
}

void	move_a(t_stack *a, int mov_a)
{
	if (mov_a > 0)
	{
		while (mov_a > 0)
		{
			ra(a);
			mov_a--;
		}
	}
	else
	{
		while (mov_a < 0)
		{
			rra(a);
			mov_a++;
		}
	}
}

void	move_b(t_stack *b, int mov_b)
{
	if (mov_b > 0)
	{
		while (mov_b > 0)
		{
			rb(b);
			mov_b--;
		}
	}
	else
	{
		while (mov_b < 0)
		{
			rrb(b);
			mov_b++;
		}
	}
}

void	final_move(t_stack *a, int final_mov, int effort)
{
	if (effort == 1)
	{
		while (final_mov > 0)
		{
			ra(a);
			final_mov--;
		}
	}
	else if (effort == 2)
	{
		while (final_mov > 0)
		{
			rra(a);
			final_mov--;
		}
	}
}

int	valid_number(long int *n, int len)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (n[i] == n[j])
				return (0);
			j++;
		}
		if (n[i] > INT_MAX || n[i] < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}
