/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:26:53 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/01 20:16:37 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int     main(void)
{
        t_list  *lista = NULL;
        t_list  *n1;
        t_list  *n2;
        t_list  *n3;

        n1 = ft_lstnew("Nó 3");
        n2 = ft_lstnew("Nó 2");
        n3 = ft_lstnew("Nó 1");
        ft_lstadd_front(&lista, n1);
        ft_lstadd_front(&lista, n2);
        ft_lstadd_front(&lista, n3);
        t_list  *ultimo = ft_lstlast(lista);
        printf("Último nó da lista: %s\n",(char *)(ultimo->content));
        return (0);
}*/
