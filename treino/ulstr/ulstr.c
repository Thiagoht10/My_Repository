/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 18:38:14 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/15 19:00:13 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] -= 32;
			write(1, &str[a], 1);
		}
		else if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] += 32;
			write(1, &str[a], 1);
		}
		else
			write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	ulstr(argv[1]);
	return (0);
}
