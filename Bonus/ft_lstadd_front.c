#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}

/**int main()
{
	t_list *debut_liste = ft_lstnew("1");
  	t_list *maillon_deux = ft_lstnew("2");
  	t_list *maillon_trois = ft_lstnew("3");

  	// Ta liste est actuellement {1}

  	ft_lstadd_front(&debut_liste, maillon_deux); 
	// Ici tu passes un POINTEUR vers le POINTEUR de maillon. alst est donc un pointeur vers pointeur. Tu peux modifier le pointeur "externe" avec *alst = maillon_deux

  	// Maintenant, debut_liste a été modifié par lst_add_front pour pointer vers maillon_deux. Le pointeur vers "1" est 'perdu' pour le main, mais tu peux toujours y accéder en faisant debut_liste->next

  	// Ta liste est maintenant {2->next->1}
	printf("%s \n", (char *)debut_liste->content);
  	
	ft_lstadd_front(&debut_liste, maillon_trois);
  	// Ta liste est maintenant {3->next->2->next->1}
	printf("%s \n", (char *)debut_liste->content);
  	// maillon_deux et maillon_trois pointent toujours respectivement vers "2" et "3". C'est toujours uniquement debut_liste qu'on modifie	
}**/
