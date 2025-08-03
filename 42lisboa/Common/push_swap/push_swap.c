/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:14:29 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/03 15:24:43 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	str_to_num(char *str)
{
	int			i;
	long int	result;
	int			sign;

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

long int	*make_split(char *str, int *len)
{
	long int	*ar;
	char		**arr;
	char		c;
	int			i;
	int			j;

	c = ' ';
	i = 0;
	j = 0;
	*len = 0;
	arr = ft_split(str, c);
	*len = split_len(arr);
	ar = malloc(*len * sizeof(long int));
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

int	is_valid_input(int argc, char **argv)
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
	t_stack		*a;
	t_stack		*b;
	long int	*data;
	int			len;

	if (argc < 2)
		return (0);
	if (!is_valid_input(argc, argv))
		return (print_error(), -1);
	data = make_stack(argc, argv, &len);
	if (!data)
		return (-1);
	if (!valid_number(data, len))
		return (print_error(), -1);
	a = create_stack(len);
	b = create_stack(len);
	assemble_stack(a, data, len);
	rotate_up(a, b, len);
	rotate_down(a, b);
	free(data);
	free_stack(a);
	free_stack(b);
	return (0);
}
