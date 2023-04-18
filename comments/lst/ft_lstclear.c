/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:01:20 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 22:31:59 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst);
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
}

/*delete and free all the elements of a linked list,
variable tmp is used to hold the current node to be deleted,
before moving on to the next node in the list.
we cannot free a node and still access it at the same time.
*/
