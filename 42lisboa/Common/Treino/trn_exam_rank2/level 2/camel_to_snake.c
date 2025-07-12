/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:48:47 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 19:35:28 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	i;
	int	index;

	i = 0;
	index = 0;
	while (str[i] != '\0')
	{
		index = str[i] + 32;
		if (str[i + 1] >= 65 && str[i + 1] <= 90)
		{
			if (str[i] >= 97 && str[i] <= 122)
				write(1, &str[i], 1);
			else
				write(1, &index, 1);
			write(1, "_", 1);
		}
		else if (str[i] >= 65 && str[i] <= 90)
			write(1, &index, 1);
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
	camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
