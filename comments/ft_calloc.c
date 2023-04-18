/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:21:06 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 17:18:06 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*mblock;

	mblock = (void *)malloc(size * nitems);
	/*Allocate a block of memory of size size * nitems using the malloc function
	and store the pointer to the allocated memory in the mblock variable.*/
	if (!mblock)
		return (NULL);
	ft_memset(mblock, 0, size * nitems);
	/*Initialize the allocated memory to 0 using the ft_memset function.*/
	return (mblock);
}
