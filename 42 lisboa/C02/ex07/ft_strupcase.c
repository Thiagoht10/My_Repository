/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:49:06 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/05 15:35:45 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] = str[a] -32;
		a++;
	}
	return (str);
}

/*int	main(void)
{
	char	string[20];

	strcpy(string, "ahhMHGJH/.,-=mgoinin");
	ft_strupcase(string);
	printf("%s", string);
	return (0);
}*/
