/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berduart <berduart@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:19:05 by berduart          #+#    #+#             */
/*   Updated: 2025/03/11 20:13:25 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str [a] != 0)
	{
		write(1, &str[a], 1);
		a++;
	}
}


int	main(void)
{
	ft_putstr("Vais levar CS manito");
	return (0);
}

