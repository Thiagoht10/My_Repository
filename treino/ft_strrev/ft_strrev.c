/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:18:57 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/13 16:08:04 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int	a;
	int	b;
	char	c;

	a = 0;
	b = 0;
	while (str[b] != '\0') //conta o caracter até chegar ao nulo
		b++;
	b--;		//decrementa um pra tirar da posicao nulo
	while (b > a)  //até o b cruzar com o a
	{
		c = str[a]; 		//faz a troca usando um char pra auxiliar
		str[a] = str[b];
		str[b] = c;
		a++;
		b--;
	}
	return (str); //retorna a string
}

int	main(void)
{
	char	str[6] = "abcd"; //passa a string

	ft_strrev(str); //chama a funcao passando como parametro a string
	printf("%s", str); //imprime a string modificada
	return(0);
}
