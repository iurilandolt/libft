/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:27:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/17 12:48:21 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = -1;
	if ((char *)dest > (char *)src)
		while (n-- > 0)
			*((char *)dest + n) = *((char *)src + n);
	else
		while (++i < n)
			*((char *)dest + i) = *((char *)src + i);
	return (dest);
}
/*

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	i = 0;
	if ((char *)dest > (char *)src)
	{
		while (n > 0)
		{
			*((char *)dest + n) = *(char *)(src + n);
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	return (dest);
}

#include <stdio.h>

int main(void)
{
	char src[10] = "abcdefg";
	char dest[10] = "1234567";
	char *ret;

	printf("Source: %s\n", src);
	printf("Destination before memmove: %s\n", dest);

	ret = ft_memmove(dest, src, 3);

	printf("Destination after memmove: %s\n", dest);
	printf("Returned pointer: %p\n", ret);

	return 0;
}
*/
