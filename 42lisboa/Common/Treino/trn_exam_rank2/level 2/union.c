/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 04:53:26 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/17 05:29:09 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_letter(char *str, char c, int j)
{
	j -= 1;
	while (j >= 0)
	{
		if (str[j] == c)
			return (1);
		j--;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (s1[i] != '\0')
	{
		c = s1[i];
		if (!check_letter(s1, c, i))
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		c = s2[j];
		if (!check_letter(s1, c, i) && !check_letter(s2, c, j))
			write(1, &s2[j], 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
