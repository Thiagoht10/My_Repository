/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:25:03 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/22 22:32:17 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     main(void)
{
	size_t	a = 0;
	char	*s1 = "abc";
	char	*s2 = "DEFF";
	char	*res;

	res = ft_strjoin(s1, s2);
	printf("Tamanho res: %zu\n", ft_strlen(res));
	while (a < ft_strlen(res) + 1)
	{
		printf("%d ", res[a]);
		a++;
	}
        return (0);
}

