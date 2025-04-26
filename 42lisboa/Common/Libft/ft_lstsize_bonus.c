/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:30:23 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/26 20:48:32 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (lst)
	{
		while (lst != NULL)
		{
			lst = lst->next;
			size++;
		}
	}
	return (size);
}

/*int     main(void)
{       
        t_list  *lista = NULL;
        t_list  *n1;
        t_list  *n2;
        
        n1 = ft_lstnew("Nó 1");
        n2 = ft_lstnew("Nó 2");
        ft_lstadd_front(&lista, n1);
        ft_lstadd_front(&lista, n2);
        t_list  *temp = lista;
        ft_lstsize(temp);
        printf("Tamanho da lista: %d\n", ft_lstsize(temp));
        return (0);
}*/
