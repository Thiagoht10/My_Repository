/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 20:55:39 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/17 21:48:34 by thde-sou         ###   ########.fr       */
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

void	epur_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || str[i] == 9)
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32 && str[i] < 127)
		{
			write(1, &str[i], 1);
			i++;
		}
		else if (str[i] == 32 || str[i] == 9)
		{
			if (check_space(str, i))
				write(1, " ", 1);
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
	epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
