/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:33:57 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/17 18:32:07 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*alpha_mirror(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'm')
			str[a] = 'z' - (str[a] - 'a');
		else if (str[a] >= 'A' && str[a] <= 'M')
			str[a] = 'Z' - (str[a] - 'A');
		else if (str[a] >= 'm' && str[a] <= 'z')
			str[a] = 'a' + ('z' - str[a]);
		else if (str[a] >= 'M' && str[a] <= 'Z')
			str[a] = 'A' - ('Z' - str[a]);
		write(1, &str[a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	alpha_mirror(argv[1]);
	return (0);
}
