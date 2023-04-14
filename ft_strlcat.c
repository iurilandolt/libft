/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:20:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/14 13:06:40 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dcount;
	size_t	scount;
	size_t	i;
	size_t	j;

	dcount = ft_strlen(dest);
	scount = ft_strlen(src);
	if (dcount == 0)
		return(scount);
	if (size <= dcount)
		return (size + scount);
	i = dcount;
	j = 0;
	while (*(src + j) && size > i + 1)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i);
	return (dcount + scount);
}
/*
int main(void)
{
        char str_1[] = "123";
        char str_2[] = "456789";
        size_t n = 10;

	printf("%s\n", str_2);
        ft_strlcat(str_2, str_1, n);
        printf("%s\n", str_2);
	printf("\nResult: %zu \n", ft_strlcat(str_2, str_1, n));
}
*/
