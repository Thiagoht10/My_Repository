/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 09:11:24 by thde-sou          #+#    #+#             */
/*   Updated: 2025/08/03 16:23:09 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	long int	*items;
	int			size;
	int			count;
}				t_stack;

typedef struct s_effort
{
	int			mov_a;
	int			mov_b;
	int			mov_duble;
}				t_effort;

typedef struct s_move
{
	int			mov_a;
	int			mov_b;
	int			mov_duble;
}				t_move;

long int		str_to_num(char *str);
int				split_len(char **arr);
long int		*make_split(char *str, int *len);
int				is_valid_input(int argc, char **argv);
int				count_num(int argc, char **argv);
long int		*make_stack(int argc, char **argv, int *len);
t_stack			*create_stack(int size);
void			free_stack(t_stack *stack);
void			sa(t_stack *a);
void			sb(t_stack *b);
void			pb(t_stack *a, t_stack *b);
void			pa(t_stack *a, t_stack *b);
void			ra(t_stack *a);
void			rra(t_stack *a);
void			rb(t_stack *b);
void			rrb(t_stack *b);
void			rrr(t_stack *a, t_stack *b);
void			rr(t_stack *a, t_stack *b);
int				*dp(t_stack *a, int len, int **prev_out);
int				max_seq(t_stack *a, int len, int *max_index);
long int		*lis(t_stack *a, int len);
long int		*rotate_lis(long int *f_element, t_stack *a, int len,
					int *size);
int				is_inside(long int num, long int *x, int len);
void			rotate_up(t_stack *a, t_stack *b, int len);
void			rotate_down(t_stack *a, t_stack *b);
int				lowest_value(t_stack *a, t_stack *b);
int				highest_value_a(t_stack *a);
int				lowest_value_a(t_stack *a);
int				subsequent_value(int n, t_stack *a);
int				less_effort(t_stack *x, int value, int *move);
int				found_index(t_stack *x, int value);
int				join_effort(t_stack *a, t_stack *b, int *mov_a, int num);
int				calculate_effort(t_stack *a, t_stack *b, int *index);
int				ft_abs(int n);
int				calculate_move(t_stack *a, t_stack *b, int *mov_a, int *mov_b);
void			aux_ra(t_stack *a);
void			aux_rb(t_stack *b);
void			aux_rrb(t_stack *b);
void			aux_rra(t_stack *a);
void			duble_move(t_stack *a, t_stack *b, int duble_mov);
void			move_a(t_stack *a, int mov_a);
void			move_b(t_stack *b, int mov_b);
void			final_move(t_stack *a, int final_mov, int effort);
int				valid_number(long int *n, int len);
void			print_error(void);
void			assemble_stack(t_stack *a, long int *data, int len);
#endif