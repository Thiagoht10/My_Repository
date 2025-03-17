/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:13:03 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/13 18:37:27 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*rotone(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] < 'z') || (str[a] >= 'A' && str[a] < 'Z'))
			str[a] += 1;
		else if (str[a] == 'z' || str[a] == 'Z')
			str[a] -= 25;
		write(1, &str[a], 1);
		a++;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
