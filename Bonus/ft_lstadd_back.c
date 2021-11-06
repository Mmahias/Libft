#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *end;

	end = ft_lstlast(*alst);
	if (!*alst)
	{	
		*alst = new;
		return ;
	}
	end->next = new;
	
}

/**int main()
{
	t_list *lst1 = ft_lstnew("2");
	t_list *new = ft_lstnew("new");
	t_list *begin = ft_lstnew("1");
	
	begin->next = lst1;
	ft_lstadd_back(&begin, new);
	
	while (begin)
	{	
		printf("%s \n", (char *)begin->content);
		begin = begin->next;
	}
	return (0);	
}**/
