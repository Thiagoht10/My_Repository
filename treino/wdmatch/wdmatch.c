/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:44:01 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/17 20:20:35 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check(char *str, char *src)
{
	int	a;
	int	b;
	
	a = 0;
	b = 0;
	while (str[a] != '\0' && src[b] != '\0')
	{
		while(src[b] != '\0')
		{
			if (str[a] == src[b])
				break;
			b++;
		}
		if (src[b] != '\0')
			a++;
	}
	if (str[a] == '\0')
		return (1);
	
	return (0);
}

char	wdmatch(char *str, char *src)
{
	int	a;
	
	a = 0;
	if (check(str, src))
	{
		while (str[a] != '\0')
		{
			write(1, &str[a], 1);
			a++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	wdmatch(argv[1], argv[2]);
	return (0);
}

