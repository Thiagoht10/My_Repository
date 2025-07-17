/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 04:15:10 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/17 04:32:38 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 95)
			i++;
		else if (str[i - 1] == 95)
		{
			c = str[i] - 32;
			write(1, &c, 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int	main(void)
{
	char	*str;

	str = "here_is_a_snake_case_word";
	snake_to_camel(str);
	write(1, "\n", 1);
	return (0);
}
