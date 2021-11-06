#include "libft.h"
//#include <stdlib.h>
//#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new;
	
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/**int main()
{
	//char *str = "hello world";
	t_list *new = ft_lstnew(NULL);
	printf("%s \n", (char *)new->content);
	return (0);
}**/
