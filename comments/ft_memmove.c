/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:27:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 17:49:21 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	/* check if dest memory starts at a higher address than src.
	if true, copy memory in reverse order*/
	if ((char *)dest > (char *)src)
		while (n-- > 0)
			*((char *)dest + n) = *((char *)src + n);
	else
		while (++i < n)
			*((char *)dest + i) = *((char *)src + i);
	return (dest);
}

