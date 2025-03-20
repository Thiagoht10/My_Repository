/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:18:26 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/03 20:31:23 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		cont++;
	}
	return (cont);
}

/*int	main()
{
	char	*string = "leo";
	int	final;

	final = ft_strlen(string); //print the return of function
	printf("%d", final);
	return (0);
}*/
