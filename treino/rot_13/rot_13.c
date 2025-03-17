/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 16:10:15 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/13 18:10:57 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*rot_13(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0') //percorre a string até o final
	{
		if ((str[a] >= 'a' && str[a] <= 'm') //verifica se é menor que m e soma 13
			|| (str[a] >= 'A' && str[a] <= 'M'))
			str[a] += 13;
		else if ((str[a] >= 'n' && str[a] <= 'z') //verifica se é maior que n e soma 13
			|| (str[a] >= 'N' && str[a] <= 'Z'))
			str[a] -= 13;
		write(1, &str[a], 1); 	//escreve o caracter mudado
		a++;	//incrementa
	}
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc != 2) //verifica que so tem 2 argumentos
	{
		write(1, "\n", 1);
		return (0);
	}
	rot_13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
