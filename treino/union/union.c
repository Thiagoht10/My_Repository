/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:00:11 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/17 17:03:49 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check(int a, char *str)
{	
	int	c;

	c = 1;
	while ((a - c) >= 0)
	{
		if (str[a] == str[a - c])
			return (1);
		c++;
	}
	return (0);
}

int	check_2(int a, int b, char *str, char *src)
{
	int	c;
	int	x;

	c = 0;
	x = 0;
	while ((b - c++) >= 0)
	{
		if (src[b] == src[b - c])
		{
			x++;
			break;
		}
	}
	c = 0;
	while ((a - c++) >= 0)
	{
		if (src[b] == str[a - c])
		{
			x++;
			break;
		}
	}
	if (x != 0)
		return (1);
	return (0);
}

char	*unionn(char *str, char	*src)
{
	int	a;
	int	b;
	
	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		if (!check(a, str))
			write(1, &str[a], 1);
		a++;
	}
	while (src[b] != '\0')
	{
		if(!check_2(a, b, str, src))
			write(1, &src[b], 1);
		b++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	unionn(argv[1], argv[2]);
	return (0);
}
