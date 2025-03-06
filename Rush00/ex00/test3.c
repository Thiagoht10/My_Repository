/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:22:56 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/02 15:28:51 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char imp)
{
	/*char	imp;*/
	write(1, &imp, 1);
}

char	prim_linha(int x, int y, int c, int l)
{
	/*int	c;
	int	l;*/

	if(c == 1)
	{
		ft_putchar('/');
		c++;
		while(c < x)
		{
			ft_putchar('*');
			c++;
		}
		if(x != 1)
		ft_putchar(92);
	}
	return (0);
}
int	rush(int x, int y)
{
	/*int	x;
	int	y;*/
	int	c = 1;
	int	l = 1;
	
	prim_linha(x, y, c, l);
	return(0);
}
int	main(void)
{
	rush(1, 1);
	return (0);
}
