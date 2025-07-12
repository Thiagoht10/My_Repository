/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:57:53 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 18:07:53 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			index = str[i] - 32;
			write(1, &index, 1);
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			index = str[i] + 32;
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
	ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
