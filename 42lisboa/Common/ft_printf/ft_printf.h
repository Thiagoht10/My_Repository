/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:02:08 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/10 03:50:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

int	    put_char(int c);
int	    ft_printf(const char *format, ...);
int	    put_str(char *str);
int	    put_pointer(void *prt);
int	    put_int(int n);
int     put_unsigned(unsigned int c);
int     put_hex(unsigned int num);
int     put_hex_upper(unsigned int num);
int     put_porcent(char c);
void    put_format(int *a, int *total, char format);
int	    putnbr_base(unsigned long n, const char *base);
#endif