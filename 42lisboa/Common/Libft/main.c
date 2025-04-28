/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:25:03 by thde-sou          #+#    #+#             */
/*   Updated: 2025/04/28 01:39:20 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*f_lst(void *content);
void    del(void *content);

int     main(void)
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	t_list	*new;
	t_list	*prt;
	
	n1 = ft_lstnew(ft_strdup("No um"));
	n2 = ft_lstnew(ft_strdup("No dois"));
	n3 = ft_lstnew(ft_strdup("No tres"));
	ft_lstadd_back(&n1, n2);
	ft_lstadd_back(&n1, n3);
	new = ft_lstmap(n1, f_lst, del);
	prt = new;
	while (prt)
	{
		printf("%s\n", (char *)(prt->content));
		prt = prt->next;
	}
	printf("Quantidade de nóis: %d\n", (int)(ft_lstsize(new)));
	return (0);
}
