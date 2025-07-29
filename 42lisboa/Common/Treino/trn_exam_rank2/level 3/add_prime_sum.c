/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:20:10 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/17 18:55:33 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	str_to_nbr(char *str)
{
	int	num;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num);
}

void	ft_putnbr(int n)
{
	char		c;
	long int	num;

	num = (long int)n;
	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int n)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	add_prime_sum(str_to_nbr(argv[1]));
	write(1, "\n", 1);
	return (0);
}
