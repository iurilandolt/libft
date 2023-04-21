/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:32:47 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 22:44:02 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*takes a pointer to the head of a linked list,
a pointer to a function f and a pointer the del callback function
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	newlst = NULL;
	while (lst != NULL)
	{
		/*creates a new node with the result of applying the function f to the content*/
		node = ft_lstnew(f(lst->content));
		if (!node)
			del (node);
		/*add result node to new list*/
		ft_lstadd_back(&newlst, node);
		/*point to next node*/
		lst = lst->next;
	}
	return (newlst);
}
