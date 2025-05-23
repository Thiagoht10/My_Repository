/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 19:16:56 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/23 21:03:30 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[MAX_FD][BUFFER_SIZE + 1];
	char		*linha;
	size_t		feedback;

	linha = NULL;
	while (1)
	{
		feedback = build_line(buffer[fd], &linha, fd);
		if (feedback == 0)
			break ;
		if (feedback == 2)
			return (NULL);
		if (newline(buffer[fd]))
		{
			found_rest(buffer[fd]);
			break ;
		}
		buffer[fd][0] = '\0';
	}
	if (linha && *linha)
		return (linha);
	free(linha);
	return (NULL);
}

int	main(void)
{
	int		fd;
	int		fd2;
	char	*lido;

	fd = open("arquivo.txt", O_RDONLY);
	fd2 = open("arquivo2.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("%s\n", "ABERTURA DO ARQUIVO FALHOU!");
		return (1);
	}
	if (fd2 < 0)
	{
		printf("%s\n", "ABERTURA DO ARQUIVO FALHOU!");
		return (1);
	}
	lido = get_next_line(fd);
	printf("%s", lido);
	free(lido);
	lido = get_next_line(fd2);
	printf("%s", lido);
	free(lido);
	lido = get_next_line(fd);
	printf("%s", lido);
	free(lido);
	lido = get_next_line(fd2);
	printf("%s", lido);
	free(lido);
	close(fd);
	return (0);
}
