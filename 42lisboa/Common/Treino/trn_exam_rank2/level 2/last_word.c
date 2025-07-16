/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:06:21 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/16 18:41:34 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	while (str[i] == 9 || str[i] == 32)
		i--;
	while (i >= 0)
	{
		if (str[i] == 9 || str[i] == 32)
			break ;
		i--;
	}
	i += 1;
	while (str[i] != '\0')
	{
		if (str[i] == 32 || str[i] == 9)
			break ;
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
	last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
