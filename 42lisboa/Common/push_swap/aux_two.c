/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_two.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:42:45 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/05 16:01:09 by thde-sou         ###   ########.fr       */
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

int	check_sinal(int argc, char **argv)
{
	int	arg;
	int	i;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		if (argv[arg][0] == '\0')
			return (0);
		while (argv[arg][i] != '\0')
		{
			if (argv[arg][i] == '+' || argv[arg][i] == '-')
			{
				if (i > 0 && argv[arg][i - 1] != ' ')
					return (0);
				if (argv[arg][i + 1] == '\0' || !ft_isdigit(argv[arg][i + 1]))
					return (0);
			}
			else if (!ft_isdigit(argv[arg][i]) && argv[arg][i] != ' ')
				return (0);
			i++;
		}
		arg++;
	}
	return (1);
}

int	stack_min(t_stack *s)
{
	int	m;
	int	i;

	i = 1;
	m = s->items[0];
	while (i < s->count)
	{
		if (s->items[i] < m)
			m = s->items[i];
		i++;
	}
	return (m);
}

int	stack_second_min(t_stack *s)
{
	int	m1;
	int	m2;
	int	i;

	i = 0;
	m1 = INT_MAX;
	m2 = INT_MAX;
	while (i < s->count)
	{
		if (s->items[i] < m1)
		{
			m2 = m1;
			m1 = s->items[i];
		}
		else if (s->items[i] < m2)
			m2 = s->items[i];
		i++;
	}
	return (m2);
}
