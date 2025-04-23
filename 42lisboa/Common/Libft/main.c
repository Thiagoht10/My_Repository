/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:25:03 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/23 20:50:02 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     main(void)
{
	const char	*str = "*/hello";
	const char	*set = "*/";
	char	*res;
	size_t	a = 0;

	res = ft_strtrim (str, set);
	while (a < ft_strlen(res) + 1)
	{
		printf("%c ", res[a]);
		a++;
	}
	printf("\ntamanho de res: %zu", ft_strlen(res));
        return (0);
}

