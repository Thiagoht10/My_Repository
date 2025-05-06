#include "libft.h"

void    lst_f(void *content);

int     main(void)
{
        t_list  *n1;
        t_list  *n2;
        t_list  *n3;

        n1 = ft_lstnew(ft_strdup("No um"));
        n2 = ft_lstnew(ft_strdup("No dois"));
        n3 = ft_lstnew(ft_strdup("No tres"));
        ft_lstadd_back(&n1, n2);
        ft_lstadd_back(&n1, n3);
        ft_lstiter(n1, lst_f);
        printf("%s\n", (char *)(n3->content));
        ft_lstclear(&n1, free);
        return (0);
}