/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:15:14 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 15:51:49 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rot_13(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 109) || (str[i] >= 65 && str[i] <= 77))
		{
			index = str[i] + 13;
			write(1, &index, 1);
		}
		else if ((str[i] >= 110 && str[i] <= 122)
			|| (str[i] >= 78 && str[i] <= 90))
		{
			index = str[i] - 13;
			write(1, &index, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
