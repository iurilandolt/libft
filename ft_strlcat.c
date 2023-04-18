/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:20:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 13:48:46 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dest && !size)
		return (0);
	i = 0;
	j = 0;
	while (*(dest + i) && i < size)
		i++;
	while (*(src + j) && (i + j + 1) < size)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (i != size)
		*(dest + i + j) = '\0';
	return (i + ft_strlen(src));
}
/*
*** stack smashing detected ***: terminated
[1]    6957 IOT instruction (core dumped)  ./a.out
*/
