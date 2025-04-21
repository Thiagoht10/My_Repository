/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:25:03 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/21 16:31:38 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(void)
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
}
