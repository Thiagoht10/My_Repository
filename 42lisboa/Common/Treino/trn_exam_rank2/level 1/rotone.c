/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:18:20 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 15:45:11 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	rotone(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 89) || (str[i] >= 97 && str[i] <= 121))
		{
			index = str[i] + 1;
			write(1, &index, 1);
		}
		else if (str[i] == 90 || str[i] == 122)
		{
			index = str[i] - 25;
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
	rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
