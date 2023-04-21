/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:49:26 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 22:15:15 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*adds a new node to the beginning of a linked list,
takes in two parameters, the address of a pointer to the first node in (lst),
and a pointer to the new node to be added (new).

t_list	*node_a;
t_list	*node_b;

node_a = ft_lstnew("Hello");
node_b = ft_lstnew("World");

ft_lstadd_front(&node1, node2);

*/
