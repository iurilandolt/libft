/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:21:06 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/27 13:35:54 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*mblock;

	mblock = (void *)malloc(size * nitems);
	if (!mblock)
		return (NULL);
	ft_memset(mblock, 0, size * nitems);
	return (mblock);
}
