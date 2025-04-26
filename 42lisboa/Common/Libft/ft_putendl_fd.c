/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:55:36 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/26 01:00:21 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		write(fd, &s[a], 1);
		a++;
	}
	write(fd, "\n", 1);
}

/*int     main(void)
{
        char    str[] = "abcd";
        int     fd = 1;

        ft_putendl_fd(str, fd);
        return (0);
}*/
