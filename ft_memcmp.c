/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:15:39 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/14 13:22:38 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n > 0)
	{
		if(*(unsigned char *)str1 != *(unsigned char *)str2)
			return(*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
		n--;
	}
	return(0);
}
