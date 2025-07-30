/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:11:24 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/30 09:13:07 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int	*items;
	int	size;
	int	count;
}		t_stack;

int		str_to_num(char *str);
int		split_len(char **arr);
int		*make_split(char *str, int *len);
int		is_valid_digit(int argc, char **argv);
int		count_num(int argc, char **argv);
int		*make_stack(int argc, char **argv, int *len);
t_stack	*create_stack(int size);
void	free_stack(t_stack *stack);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rra(t_stack *a);
void	rb(t_stack *b);
void	rrb(t_stack *b);
int	*dp(t_stack *a, int len, int **prev_out);
int		*prev(t_stack *a, int len);
int		max_seq(t_stack *a, int len, int *max_index);
int		*lis(t_stack *a, int len);
int		*rotate_lis(int *f_element, t_stack *a, int len, int *size);
int is_inside(int num, int *x, int len);
void    rotate_up(t_stack *a, t_stack *b, int len);
#endif