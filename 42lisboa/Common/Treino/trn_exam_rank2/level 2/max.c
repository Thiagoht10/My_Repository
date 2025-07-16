/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:45:14 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/16 19:10:12 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	int	control;

	i = 0;
	len -= 1;
	control = tab[0];
	while (i <= len)
	{
		if (tab[i] > control)
			control = tab[i];
		i++;
	}
	return (control);
}

/* int	main(void)
{
	int	tab[] = {1, 2, 22, 5, 40, 15, 4};
	int	len;

	len = sizeof(tab) / sizeof(tab[0]);
	printf("%d\n", max(tab, len));
	return (0);
} */
