/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 22:40:36 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/02 22:56:14 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    duble_move(t_stack *a, t_stack *b, int duble_mov)
{
    if(duble_mov > 0)
	{
		while(duble_mov > 0)
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

void    move_a(t_stack *a, t_stack *b, int mov_a)
{
    if(mov_a > 0)
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

void    move_b(t_stack *a, t_stack*b, int mov_b)
{
    if(mov_b > 0)
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

void    final_move(t_stack *a, int final_mov, int effort)
{
    if(effort == 1)
	{
		while (final_mov > 0)
		{
			ra(a);
			final_mov--;
		}
	}
	else if(effort == 2)
	{
		while (final_mov > 0)
		{
			rra(a);
			final_mov--;
		}
	}
}
