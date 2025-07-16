/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 14:46:49 by thde-sou          #+#    #+#             */
/*   Updated: 2025/07/13 16:27:20 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	do_op(char *num1, char *op, char *num2)
{
	int	n1;
	int	n2;
	int	res;

	n1 = atoi(num1);
	n2 = atoi(num2);
	res = 0;
	if (op[0] == '+')
		res = n1 + n2;
	else if (op[0] == '-')
		res = n1 - n2;
	else if (op[0] == '/')
		res = n1 / n2;
	else if (op[0] == '*')
		res = n1 * n2;
	else if (op[0] == '%')
		res = n1 % n2;
	printf("%d\n", res);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	do_op(argv[1], argv[2], argv[3]);
	return (0);
}
