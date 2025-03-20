/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:00:09 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/09 16:57:29 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
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
 
/*int	main(void)
{
	char s1[] = "HeLlo";
	char s2[] = "Hello1";
	unsigned int n = 3;
	
	int result = ft_strncmp(s1,s2,n);
	printf("result: %d",result);
}*/
