/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:09:30 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 17:40:30 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*checks for c in the byte pointed to by *str for a range of n bytes*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n > 0)
	{
		/*cast the str pointer to unsigned char * compare it to the c value as an unsigned char*/
		if (*(unsigned char *)str == (unsigned char)c)
			return ((char *)str);
		str++;
		n--;
	}
	return (NULL);
}
