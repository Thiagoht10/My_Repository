/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 12:09:02 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/14 13:01:52 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	last_word(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	a--;
	while (str[a] == 9 || str[a] == 32)
		a--;
	while ((str[a] != 9 && str[a] != 32) && a != 0)
		a--;
	if(a != 0)
		a++;
	while (str[a] != '\0' && (str[a] != 32 && str[a] != 9))
	{
		write(1, &str[a], 1);
		a++;
	}
}

int	main(void)
{
	char	string[] = "bom.dia";

	last_word(string);
	return (0);
}
