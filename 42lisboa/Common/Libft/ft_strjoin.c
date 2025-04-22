/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 21:30:30 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/22 22:37:28 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str1;
	char	*str2;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str1 = malloc(len);
	str2 = ft_calloc(ft_strlen(s2) + 1, sizeof(char));
	ft_memmove(str1, s1, ft_strlen(s1));
	ft_memmove(str2, s2, ft_strlen(s2));
	if (!str1)
		return (NULL);
	ft_strlcat((char *)str1, str2, len);
	return (str1);
}

/*int     main(void)
{
        size_t  a = 0;
        char    *s1 = "abc";
        char    *s2 = "DEFF";
        char    *res;

        res = ft_strjoin(s1, s2);
        printf("Tamanho res: %zu\n", ft_strlen(res));
        while (a < ft_strlen(res) + 1)
        {
                printf("%d ", res[a]);
                a++;
        }
        return (0);
}*/
