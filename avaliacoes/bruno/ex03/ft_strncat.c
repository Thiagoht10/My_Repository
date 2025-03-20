/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhibbeln <bhibbeln@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:56:38 by bhibbeln          #+#    #+#             */
/*   Updated: 2025/03/09 17:03:17 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	f;

	i = 0;
	f = 0;
	while (dest[i])
	{
		i++;
	}
	while ((f < nb) && (src[f] != '\0'))
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
	char dest[] = "Hello ";
	char src[] = "World";
	unsigned int nb = 4;

	ft_strncat(dest, src, nb);
	printf("dest: %s\n",dest);
	printf("src: %s\n",src);
}*/
