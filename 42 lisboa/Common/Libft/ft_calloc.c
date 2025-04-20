/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:28:41 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/20 19:00:09 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*arr;
	size_t	bytes;

	bytes = nmenb * size;
	arr = malloc(bytes);
	if (arr != NULL)
		ft_memset(arr, 0, bytes);
	if (arr == NULL)
		return (NULL);
	return (arr);
}

/*int     main(void)
{
        int     a = 0;
        int     z = 5;
        char     *arr = ft_calloc(z, sizeof(int));
        char     *arr2 = calloc(z, sizeof(int));

        while (a < z)
        {
                printf("%d", arr[a]);
                a++;
        }
        printf("\n");
        a = 0;
        while (a < z)
        {
                printf("%d", arr2[a]);
                a++;
        }
        return (0);
}*/
