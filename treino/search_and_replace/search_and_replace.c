/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 16:32:07 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/15 18:20:03 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check(char *x, char *y)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while(x[a] != '\0')
		a++;
	while(y[b] != '\0')
		b++;

	if (a == 1 && b == 1)
		return (1);
	return (0);
}

char	*search_and_replace(char *c, char x, char b)
{
	int	a;

	a = 0;
	while (c[a] != '\0')
	{
		if (c[a] != x)
			write(1, &c[a], 1);
		else if (c[a] == x)
			write(1, &b, 1);
		a++;
	}
	return (c);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (1);
	}
	if (check(argv[2], argv[3]))
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
