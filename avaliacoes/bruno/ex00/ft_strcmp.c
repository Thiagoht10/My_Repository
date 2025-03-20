/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 16:55:23 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/06 18:22:13 by bhibbeln         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
		{
			if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (-(s2[i] - s1[i]));
		}
	}
	return (0);
}
/* 
int	main(void)
{
	char s1[] = "Hello";
	char s2[] = "Hello1";
	
	int result = ft_strcmp(s1,s2);
	printf("%d",result);
} */