/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 00:16:41 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/18 04:37:53 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_space(char *str, int i)
{
	while (str[i] == 32 || str[i] == 9)
		i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

void	expand_str(char *str)
{
	int	i;
	int	y;

	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] != '\0')
	{
		y = 0;
		if (str[i] > 32 && str[i] < 122)
			write(1, &str[i++], 1);
		else if (str[i] == 32 || str[i] == 9)
		{
			if (check_space(str, i))
			{
				while (y++ < 3)
					write(1, " ", 1);
			}
			while (str[i] == 32 || str[i] == 9)
				i++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
