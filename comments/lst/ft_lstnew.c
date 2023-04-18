/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:25:41 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 22:09:59 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*

this function creates a new node for a linked list, as prototyped in our Makefile,
the node will contain a pointer to content that is passed as an argument in the function.

int	main(void)
{
	t_list	*new_node;

	new_node = ft_lstnew((int *)42);
}

*/
