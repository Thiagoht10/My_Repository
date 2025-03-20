/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berduart <berduart@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:39:35 by berduart          #+#    #+#             */
/*   Updated: 2025/03/11 20:29:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swapper;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				swapper = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = swapper;
			}
			i++;
		}
		size--;
	}
}


int	main(void)
{
	int	arr[7] = {4, 6, 5, 2, 7, 1, 3};  // Array corrigido
	int	size;
	int	i;

	size = 7;
	printf("Array original: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(arr, size);

	printf("Array ordenado: ");
	i = 0;
	while (i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");

	return (0);
}

