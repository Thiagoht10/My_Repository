/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berduart <berduart@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 16:40:30 by berduart          #+#    #+#             */
/*   Updated: 2025/03/11 20:15:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != 0)
	{
		a++;
	}
	return (a);
}

int	main(void)
{
	int	length;

	length = ft_strlen("Cont");
	printf("Length: %d\n", length);
	return (0);
}

