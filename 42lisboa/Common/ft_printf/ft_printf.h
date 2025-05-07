/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:02:08 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/07 22:22:56 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int     put_char(int c);
int     ft_printf(const char *format, ...);
#endif