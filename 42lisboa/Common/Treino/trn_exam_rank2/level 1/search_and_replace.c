/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 15:58:25 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/12 17:38:34 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_letter(char *a, char *b)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (a[i] != '\0')
		i++;
	while (b[y] != '\0')
		y++;
	if (i <= 1 && y <= 1)
		return (1);
	return (0);
}

void	search_and_replace(char *str, char *a, char *b)
{
	int	i;

	i = 0;
	if (!check_letter(a, b))
		return ;
	while (str[i] != '\0')
	{
		if (str[i] == a[0])
			write(1, &b[0], 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
