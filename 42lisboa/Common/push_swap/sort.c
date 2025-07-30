/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorte.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 01:05:02 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/30 04:57:42 by thde-sou         ###   ########.fr       */
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
	while (a->items[0] != sequence[0])
		ra(a);
	free(sequence);
}
