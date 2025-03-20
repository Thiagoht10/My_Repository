/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibaranch <ibaranch@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:10:02 by ibaranch          #+#    #+#             */
/*   Updated: 2025/03/18 13:04:36 by ibaranch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int			len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strcopy(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(ft_strlen(src) + 1);
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

t_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int			i;
	t_stock_str	*arr;	

	i = 0;
	arr = malloc((argc) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	while (i < argc - 1)
	{	
		arr[i].size = ft_strlen(argv[i + 1]);
		arr[i].str = argv[i + 1];
		arr[i].copy = ft_strcopy(argv[i + 1]);
		i++;
	}
	arr[i].str = NULL;
	return (arr);
}
/*
void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}
 
void	ft_putnbr(int nb)
{
	char	string[12];
	int             i;

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb > 0)
	{
		while (nb)
		{
			string[i] = nb % 10 + '0';
			nb = nb / 10;
			i++;
		}
		while (i--)
			write (1, &string[i], 1);
	}
	write (1, "\n", 1);
	}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		free(par[i].copy);
		i++;
	}
}
*/
/*
int	main(int argc, char **argv)
{
	t_stock_str	*arr = ft_strs_to_tab(argc, argv);
	ft_show_tab(arr);
	free(arr);
	return (0);
}
*/
