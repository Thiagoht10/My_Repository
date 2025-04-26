/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:25:03 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/26 08:03:58 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     main(void)
{                       
        int     a;
        int     b;
        char    *str = "aaaacbbbcddd";
        char    c = 'c';
        char    **arr = ft_split(str, c);

        a = 0;
        while (arr[a] != NULL)
        {
                printf("%s ", arr[a]);
                a++;
        }
        b = 0;
        while (arr[a])
                free(arr[b++]);
        free(arr);
        return (0);
}
