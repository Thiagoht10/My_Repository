/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:14:55 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/03 20:37:55 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;
	int	comp;
	int	a;

	cont = size -1;
	a = 0;
	while (a < cont)
	{
		comp = tab[a];
		tab[a] = tab[cont];
		tab[cont] = comp;
		cont--;
		a++;
	}
}

/*int	main()
{
	int	arr[] = {1,2,4,6,7};
	int	b = 5;
	int	a = 0;
	
	ft_rev_int_tab(arr, b);
	while (a < b)
	{
		printf("%d", arr[a]);
		a++;
	}
	return (0);
}*/
