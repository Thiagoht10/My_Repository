/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 12:54:20 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/13 13:14:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;

	while (a > 0)
	{
		a--;
		write(1, &str[a], 1);
	}
	write(1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	else
		ft_rev_print(argv[1]);
	return (0);
}
