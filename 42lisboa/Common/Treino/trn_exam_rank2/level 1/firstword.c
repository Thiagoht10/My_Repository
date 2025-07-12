/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:56:58 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/10 19:52:05 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] == 9 || str[a] == 32)
		a++;
	while (str[a] > 32 && str[a] < 127)
	{
		b++;
		a++;
	}
	while (b > 0)
	{
		write(1, &str[a - b], 1);
		b--;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
