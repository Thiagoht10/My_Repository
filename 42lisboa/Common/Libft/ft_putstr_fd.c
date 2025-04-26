/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 00:30:54 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/26 00:49:58 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *c, int fd)
{
	int	a;

	a = 0;
	while (c[a] != '\0')
	{
		write(fd, &c[a], 1);
		a++;
	}
}

/*int     main(void)
{
        char    str[] = "abcd";
        int     fd = 1;

        ft_putstr_fd(str, fd);
        printf("\n");
        return (0);
}*/
