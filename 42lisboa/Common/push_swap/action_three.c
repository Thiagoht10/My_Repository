/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 03:27:11 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/03 15:47:38 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	aux_ra(t_stack *a)
{
	int	i;
	int	tmp;

	if (!a || a->count < 2)
		return ;
	i = 0;
	tmp = a->items[0];
	while (i < a->count - 1)
	{
		a->items[i] = a->items[i + 1];
		i++;
	}
	a->items[a->count - 1] = tmp;
}

void	aux_rb(t_stack *b)
{
	int	i;
	int	tmp;

	if (!b || b->count < 2)
		return ;
	i = 0;
	tmp = b->items[0];
	while (i < b->count - 1)
	{
		b->items[i] = b->items[i + 1];
		i++;
	}
	b->items[b->count - 1] = tmp;
}

void	aux_rra(t_stack *a)
{
	int	i;
	int	tmp;

	if (!a || a->count < 2)
		return ;
	i = a->count - 1;
	tmp = a->items[a->count - 1];
	while (i > 0)
	{
		a->items[i] = a->items[i - 1];
		i--;
	}
	a->items[0] = tmp;
}

void	aux_rrb(t_stack *b)
{
	int	i;
	int	tmp;

	if (!b || b->count < 2)
		return ;
	i = b->count - 1;
	tmp = b->items[b->count - 1];
	while (i > 0)
	{
		b->items[i] = b->items[i - 1];
		i--;
	}
	b->items[0] = tmp;
}
