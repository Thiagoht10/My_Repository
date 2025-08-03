/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:45:04 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/03 15:28:19 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_num(int argc, char **argv)
{
	int	found;
	int	arg;
	int	i;

	found = 0;
	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] == 9 || argv[arg][i] == 32)
			i++;
		while (1)
		{
			if (argv[arg][i] == 9 || argv[arg][i] == 32 || argv[arg][i] == '\0')
			{
				if (argv[arg][i - 1] != 9 && argv[arg][i - 1] != 32)
					found++;
			}
			if (argv[arg][i] == '\0')
				break ;
			i++;
		}
		arg++;
	}
	return (found);
}

void	copy_stack(long int *res, long int *stack_a, int *len, int *i)
{
	int	j;

	j = 0;
	while (j < *len)
	{
		stack_a[*i] = res[j];
		(*i)++;
		j++;
	}
}

long int	*make_stack(int argc, char **argv, int *len)
{
	long int	*stack_a;
	int			arg;
	int			i;
	int			len_split;
	long int	*res;

	i = 0;
	arg = 1;
	*len = count_num(argc, argv);
	stack_a = malloc(*len * sizeof(long int));
	if (!stack_a)
		return ((long *)-1);
	while (arg < argc)
	{
		res = make_split(argv[arg], &len_split);
		copy_stack(res, stack_a, &len_split, &i);
		arg++;
		free(res);
	}
	return (stack_a);
}

t_stack	*create_stack(int size)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->items = malloc(size * sizeof(long int));
	if (!stack->items)
	{
		free(stack);
		return (NULL);
	}
	stack->size = size;
	stack->count = 0;
	return (stack);
}

void	free_stack(t_stack *stack)
{
	if (stack)
	{
		free(stack->items);
		free(stack);
	}
}
