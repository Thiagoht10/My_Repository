/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:04:38 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/09 16:59:58 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[f] != '\0')
	{
		dest[i] = src[f];
		i++;
		f++;
	}
	dest[i] = '\0';
	return (dest);
}
 
/*int	main(void)
{
	char dest[] = "b73568b";
	char src[] = "AAAA";

	ft_strcat(dest, src);
	printf("dest: %s\n",dest);
	printf("src: %s\n",src);
}*/
