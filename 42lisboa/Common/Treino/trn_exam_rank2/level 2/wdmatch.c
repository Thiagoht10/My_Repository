/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 05:30:46 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/17 05:58:05 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				break ;
			j++;
		}
		if (s2[j] == '\0')
			return ;
		i++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		write(1, &s1[i], 1);
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
	wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
