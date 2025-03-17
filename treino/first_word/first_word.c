/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:18:19 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/13 15:12:04 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*first_word(char *str)
{
	int	a;
	
	a = 0;
	while (str[a] == 32 || str[a] == 9)
	{
		a++;
	}
	while(str[a] != '\0')
	{
		write(1, &str[a], 1);
		if (str[a]  == 32 || str[a] == 9)
		{
			write(1, "\n", 1);
			return (0);
		}
		a++;
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
		first_word(argv[1]);
	return (0);
}
