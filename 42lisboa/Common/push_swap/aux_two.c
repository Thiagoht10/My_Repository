/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:42:45 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/03 15:44:36 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assemble_stack(t_stack *a, long int *data, int len)
{
	int	i;

	i = 0;
	if (!a || !a->items || !data || len < 0 || len > a->size)
		return ;
	while (i < len)
	{
		a->items[i] = data[i];
		i++;
	}
	a->count = len;
}

void	print_error(void)
{
	write(2, "Error\n", 6);
}
