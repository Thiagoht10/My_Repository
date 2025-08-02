/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:14:29 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/02 08:19:13 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_to_num(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (!ft_isdigit(str[i]) && str[i] != '\0')
		result = 0;
	return (result * sign);
}

int	split_len(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}

int	*make_split(char *str, int *len)
{
	int		*ar;
	char	**arr;
	char	c;
	int		i;
	int		j;

	c = ' ';
	i = 0;
	j = 0;
	*len = 0;
	arr = ft_split(str, c);
	*len = split_len(arr);
	ar = malloc(*len * sizeof(int));
	while (arr[i])
	{
		ar[i] = str_to_num(arr[i]);
		i++;
	}
	while (arr[j])
		free(arr[j++]);
	free(arr);
	return (ar);
}

int	is_valid_digit(int argc, char **argv)
{
	int	i;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		i = 0;
		while (argv[arg][i] != '\0')
		{
			if (!ft_isdigit(argv[arg][i]) && argv[arg][i] != '-'
				&& argv[arg][i] != '+' && argv[arg][i] != ' ')
				return (0);
			i++;
		}
		arg++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		j;
	int		i;
	int		y;
	t_stack	*a;
	t_stack	*b;
	int		*data;
	int		len;
	int		*liss;
	int		max_index;
	int		max_len;
	int		*rro;
	int		size;
	int		index;
	int		mov;
	int		num;
	int		mv_a;
	int		mv_b;

	i = 0;
	j = 0;
	y = 0;
	if (!is_valid_digit(argc, argv))
	{
		write(1, "Error\n", 6);
		return (-1);
	}
	data = make_stack(argc, argv, &len);
	a = create_stack(len);
	b = create_stack(len);
	while (j < len)
	{
		a->items[j] = data[j];
		j++;
	}
	a->count = len;
	num = 4;
	max_len = max_seq(a, len, &max_index);
	liss = lis(a, len);
	rro = rotate_lis(&liss[0], a, len, &size);
	/* y = 0;
	while (y < max_len)
		printf("%d.", liss[y++]);
	printf("\n"); */
	/* y = 0;
	while (y < size)
		printf("%d.", rro[y++]);
	printf("\n"); */
	rotate_up(a, b, len);
	//pa(a, b);
	//rra(a);
	//pa(a, b);
	//rra(a);
	//pa(a, b);
	//rr(a, b);
	//ra(a);
	//pa(a, b);
	//ra(a);
	//pa(a, b);
	//rr(a, b);
	//rr(a, b);
	//pa(a, b);

	//printf("\nlowest_value: %d", lowest_value(a, b));
	//printf("\nhighest_value: %d", highest_value(a, b));
	//printf("\nPrevious_value: %d", previous_value(a, b));
	//printf("\nIs_found_stack_b : %d", is_found_stack_b(b, previous_value(a, b), &index));
	//printf("\nSubsequent_value: %d\n", subsequent_value(18, a, b));
	//printf("\nLess_effort: %d", less_effort(a, 4, &mov));
	//printf("\nMove: %d", mov);
	//mv_b = join_effort(a, b, &mv_a, 18);
	//printf("\nMov_a: %d", mv_a);
	//printf("\nMov_b: %d", mv_b);
	//
	//printf("\nEffort: %d", calculate_effort(a, b, &index));
	//printf("\nIndex: %d", index);
	//calculate_move(a, b, &mv_a, &mv_b);
	rotate_down(a, b);
	//printf("\n\n");
	y = 0;
	while(y < a->count)
		printf(".%d.", a->items[y++]);
	printf("\n");
	y = 0;
	while(y < b->count)
		printf(".%d.", b->items[y++]);
	//printf("\n");
	free(data);
	free_stack(a);
	free_stack(b);
	return (0);
}
