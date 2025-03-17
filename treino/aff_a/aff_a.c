/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:26:53 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/13 11:33:39 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	aff_a(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == 'a')
		{
			write(1, "a", 1);
			write(1, "\n", 1);
			return (0);
		}
		a++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		aff_a(argv[1]);
	else
		write(1, "a\n", 2);
	return (0);
}
