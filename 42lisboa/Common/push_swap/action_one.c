/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 16:05:57 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/26 22:20:07 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	if (!a || a->count < 2)
		return ;
	tmp = a->items[0];
	a->items[0] = a->items[1];
	a->items[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	int	tmp;

	if (!b || b->count < 2)
		return ;
	tmp = b->items[0];
	b->items[0] = b->items[1];
	b->items[1] = tmp;
	write(1, "sb\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	int	i;

	if (!a || !b || a->count == 0)
		return ;
	i = b->count;
	while (i > 0)
	{
		b->items[i] = b->items[i - 1];
		i--;
	}
	b->items[0] = a->items[0];
	b->count++;
	i = 0;
	while (i < a->count - 1)
	{
		a->items[i] = a->items[i + 1];
		i++;
	}
	a->count--;
	write(1, "pb\n", 3);
}

void	pa(t_stack *a, t_stack *b)
{
	int	i;

	if (!a || !b || b->count == 0)
		return ;
	i = a->count;
	while (i > 0)
	{
		a->items[i] = a->items[i - 1];
		i--;
	}
	a->items[0] = b->items[0];
	a->count++;
	i = 0;
	while (i < b->count - 1)
	{
		b->items[i] = b->items[i + 1];
		i++;
	}
	b->count--;
	write(1, "pa\n", 3);
}

void	ra(t_stack *a)
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
	write(1, "ra\n", 3);
}
