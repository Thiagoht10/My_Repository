/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:26:23 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/29 21:51:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*dp(t_stack *a, int len)
{
	int	i;
	int	j;
	int	*dp;

	i = 0;
	dp = malloc(len * sizeof(int));
	if (!dp)
		return (NULL);
	while (i < len)
		dp[i++] = 1;
	i = 1;
	while (i < len)
	{
		j = 0;
		while (j < i)
		{
			if (a->items[i] > a->items[j] && dp[j] + 1 > dp[i])
				dp[i] = dp[j] + 1;
			j++;
		}
		i++;
	}
	return (dp);
}

int	*prev(t_stack *a, int len)
{
	int	i;
	int	j;
	int	*prev;

	i = 0;
	prev = malloc(len * sizeof(int));
	if (!prev)
		return (NULL);
	while (i < len)
		prev[i++] = -1;
	i = 1;
	while (i < len)
	{
		j = 0;
		while (j < i)
		{
			if (a->items[i] > a->items[j] && prev[j] + 1 > prev[i])
				prev[i] = j;
			j++;
		}
		i++;
	}
	return (prev);
}

int	max_seq(t_stack *a, int len, int *max_index)
{
	int	i;
	int	max_len;
	int	*dpp;

	if (max_index)
		*max_index = 0;
	i = 0;
	max_len = 0;
	dpp = dp(a, len);
	while (i < len)
	{
		if (dpp[i] > max_len)
		{
			max_len = dpp[i];
			if (max_index)
				*max_index = i;
		}
		i++;
	}
	free(dpp);
	return (max_len);
}

int	*lis(t_stack *a, int len)
{
	int	index;
	int	*lis;
	int	max_len;
	int	*pv;
	int	i;

	pv = prev(a, len);
	max_len = max_seq(a, len, &index);
	i = max_len - 1;
	lis = malloc(max_len * sizeof(int));
	if (!lis)
		return (NULL);
	while (index != -1)
	{
		lis[i] = a->items[index];
		index = pv[index];
		i--;
	}
	free(pv);
	return (lis);
}

int	*rotate(int *f_element, t_stack *a, int len, int *size)
{
	t_stack	tmp;
	int		*new_stack;
	int		*new_lis;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new_stack = malloc(len * sizeof(int));
	while (a->items[i] != f_element[0])
		i++;
	while (i < len)
		new_stack[j++] = a->items[i++];
	i = 0;
	while (a->items[i] != f_element[0])
		new_stack[j++] = a->items[i++];
	tmp.count = len;
	tmp.items = new_stack;
	new_lis = lis(&tmp, len);
	if (size)
		*size = max_seq(&tmp, len, NULL);
	free(new_stack);
	return (new_lis);
}
