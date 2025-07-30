/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sequence.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 21:26:23 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/30 09:43:56 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	aux_dp(int len, t_stack *a, int *dp, int *prev)
{
	int	i;
	int	j;

	i = 0;
	while (++i < len)
	{
		j = -1;
		while (++j < i)
		{
			if (a->items[i] > a->items[j] && dp[j] + 1 > dp[i])
			{
				dp[i] = dp[j] + 1;
				prev[i] = j;
			}
		}
	}
}

int	*dp(t_stack *a, int len, int **prev_out)
{
	int	i;
	int	j;
	int	*dp;
	int	*prev;

	i = 0;
	dp = malloc(len * sizeof(int));
	prev = malloc(len * sizeof(int));
	if (!dp)
		return (NULL);
	while (i < len)
	{
		dp[i] = 1;
		prev[i] = -1;
		i++;
	}
	aux_dp(len, a, dp, prev);
	*prev_out = prev;
	return (dp);
}

int	max_seq(t_stack *a, int len, int *max_index)
{
	int	i;
	int	max_len;
	int	*dpp;
	int	*pv;

	if (max_index)
		*max_index = 0;
	i = 0;
	max_len = 0;
	dpp = dp(a, len, &pv);
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
	free(pv);
	return (max_len);
}

int	*lis(t_stack *a, int len)
{
	int	index;
	int	*lis;
	int	max_len;
	int	*pv;
	int	i;

	dp(a, len, &pv);
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

int	*rotate_lis(int *f_element, t_stack *a, int len, int *size)
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
