/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 05:01:11 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/24 21:58:48 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char c)
{
	size_t	a;
	size_t	count;

	a = 0;
	count = 0;
	while (str[a] != '\0')
	{
		if ((a == 0 || str[a - 1] == c) && str[a] != c)
			count += 1;
		a++;
	}
	return (count);
}

char	*cpy_str(const char *s, size_t start, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, s + start, len);
	word[len] = '\0';
	return (word);
}

int	count_str(char const *s, char c, int start)
{
	int	a;

	a = start;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			break ;
		a++;
	}
	return (a - start);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;
	size_t	a;
	size_t	b;
	size_t	len;

	count = count_words(s, c) + 1;
	arr = malloc(count * sizeof(char *));
	if (!arr)
		return (NULL);
	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		if ((a == 0 || s[a - 1] == c) && s[a] != c)
		{
			len = count_str(s, c, a);
			arr[b++] = cpy_str(s, a, len);
			a += len;
		}
		else
			a++;
	}
	arr[b] = NULL;
	return (arr);
}

/*int     main(void)
{
        int     a;
        char    *str = "aaaacbbbcddd";
        char    c = 'c';
        char    **arr = ft_split(str, c);

        a = 0;
        while (arr[a] != NULL)
        {
                printf("%s ", arr[a]);
                a++;
        }
        free(arr);
        return (0);
}*/
