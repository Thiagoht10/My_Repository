/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:14:29 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/29 21:57:44 by thde-sou         ###   ########.fr       */
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
	max_len = max_seq(a, len, &max_index);
	liss = lis(a, len);
	rro = rotate(&liss[0], a, len, &size);
	y = 0;
	while (y < max_len)
		printf("%d.", liss[y++]);
	printf("\n");
	y = 0;
	while (y < size)
		printf("%d.", rro[y++]);
	free(data);
	free_stack(a);
	free_stack(b);
	return (0);
}
