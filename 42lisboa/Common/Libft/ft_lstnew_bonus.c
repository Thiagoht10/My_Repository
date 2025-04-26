/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 18:55:46 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/26 19:57:10 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*int     main(void)
{        
        t_list  *nodo;
        int     valor = 42;
        nodo = ft_lstnew(&valor);
        if (nodo)
                printf("conteudo do nó: %d\n", *(int *)(nodo->content));
        return (0);
}*/
