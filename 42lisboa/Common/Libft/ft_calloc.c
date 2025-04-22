/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 18:28:41 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/22 21:09:07 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*arr;
	size_t	bytes;

	if (nmenb == 0 || size == 0)
		return (malloc(1));
	if (SIZE_MAX / size < nmenb)
		return (NULL);
	bytes = nmenb * size;
	arr = malloc(bytes);
	if (arr != NULL)
		ft_memset(arr, 0, bytes);
	else
		return (NULL);
	return (arr);
}

/*int     main(void)
{       
        int     a = 0;
        int     z = 4;
        char     *arr = ft_calloc(SIZE_MAX, SIZE_MAX);
        
        while (a < z)
        {       
                if (arr != NULL)
                        printf("%d", arr[a]);
                a++;
        }
        return (0);
}*/
