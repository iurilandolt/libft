/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:20:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/16 02:18:27 by rlandolt         ###   ########.fr       */
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
	*(dest + i) = '\0';
	return (dcount + scount);
}
/*
*** stack smashing detected ***: terminated
[1]    6957 IOT instruction (core dumped)  ./a.out
*/
