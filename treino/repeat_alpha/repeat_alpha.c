/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 14:57:04 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/15 16:25:14 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	impress(char c, int min_index)
{
	int	a;

	a = 0;
	while (a < min_index)
	{
		write(1, &c, 1);
		a++;
	}
}


char	repeat_alpha(char *str)
{
	int	a;
	int	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = 0;
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			c = str[a] - 96;
			impress(str[a], c);
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
		{
			c = str[a] - 64;
			impress(str[a], c);
		}
		else
			write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat_alpha(argv[1]);
	return (0);
}
