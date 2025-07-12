/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 19:31:12 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 12:48:59 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print(char *str, int index)
{
	while (index >= 0)
	{
		write(1, &str[0], 1);
		index--;
	}
}

void	repeat_alpha(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			index = str[i] - 65;
			print(&str[i], index);
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			index = str[i] - 97;
			print(&str[i], index);
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
	repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
