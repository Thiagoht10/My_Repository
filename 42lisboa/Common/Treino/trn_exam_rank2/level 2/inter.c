/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 21:06:22 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/16 04:50:25 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check_letter(char *str, char c, int j)
{
	j -= 1;
	while (j >= 0)
	{
		if (c == str[j])
			return (1);
		j--;
	}
	return (0);
}

void	inter(char *str_one, char *str_two)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (str_one[i] != '\0')
	{
		j = 0;
		while (str_two[j] != '\0')
		{
			c = str_two[j];
			if (str_one[i] == str_two[j] && !check_letter(str_one, c, i))
			{
				write(1, &str_one[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
