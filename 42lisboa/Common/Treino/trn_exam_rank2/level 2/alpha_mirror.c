/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:13:17 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 19:39:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_part(char *str)
{
	int	index;

	index = 0;
	if (str[0] >= 65 && str[0] <= 77)
	{
		index = 90 - (str[0] - 65);
		write(1, &index, 1);
	}
	else if ((str[0] >= 97 && str[0] <= 109))
	{
		index = 122 - (str[0] - 97);
		write(1, &index, 1);
	}
}

void	secund_part(char *str)
{
	int	index;

	index = 0;
	if (str[0] >= 78 && str[0] <= 90)
	{
		index = (90 - str[0]) + 65;
		write(1, &index, 1);
	}
	else if ((str[0] >= 110 && str[0] <= 122))
	{
		index = (122 - str[0]) + 97;
		write(1, &index, 1);
	}
}

void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 77) || (str[i] >= 97 && str[i] <= 109))
			first_part(&str[i]);
		else if ((str[i] >= 78 && str[i] <= 90)
			|| (str[i] >= 110 && str[i] <= 122))
			secund_part(&str[i]);
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
	alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
