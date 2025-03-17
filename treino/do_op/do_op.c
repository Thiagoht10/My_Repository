/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 21:42:36 by thde-sou          #+#    #+#             */
/*   Updated: 2025/03/17 22:19:00 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	do_op(char *num, char *op, char *num_2)
{
	if (*op == '+')
		printf("%d\n", atoi(num) + atoi(num_2));
	else if (*op == '-')
		printf("%d\n", atoi(num) - atoi(num_2));
	else if (*op == '*')
		printf("%d\n", atoi(num) * atoi(num_2));
	else if (*op == '/')
		printf("%d\n", atoi(num) / atoi(num_2));
	else if (*op == '%')
		printf("%d\n", atoi(num) % atoi(num_2));
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("\n");
		return (1);
	}
	do_op(argv[1], argv[2], argv[3]);
	return (0);
}
