#include "libft.h"
//#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int i;
	
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

/**int main()
{
	struct s_list elem1;
	struct s_list elem2;
	struct s_list elem3;
	struct s_list *start;
	
	start = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;
	
	printf("size: %d \n", ft_lstsize(start));
	return (0);
}**/
