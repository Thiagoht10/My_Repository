/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:52:54 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/10 21:55:01 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	convertion(int num, char *str)
{
	int	a;

	a = 0;
	while (num > 0)
	{
		str[a] = (num % 10) + '0';
		num = num / 10;
		a++;
	}
	return (a);
}

void	print(int num)
{
	int		a;
	char	str[3];

	a = convertion(num, str) - 1;
	while (a >= 0)
	{
		write(1, &str[a], 1);
		a--;
	}
}

void	fizzbuzz(void)
{
	int	num;

	num = 1;
	while (num <= 100)
	{
		if ((num % 15) == 0)
			write(1, "fizzbuzz", 8);
		else if ((num % 5) == 0)
			write(1, "buzz", 4);
		else if ((num % 3) == 0)
			write(1, "fizz", 4);
		else
			print(num);
		write(1, "\n", 1);
		num++;
	}
}

int	main(void)
{
	fizzbuzz();
	return (0);
}
