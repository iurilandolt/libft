/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 13:02:15 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 13:49:04 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	if (n == 0)
		return (0);
	while ((*str1 || *str2) && (n > 1) && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
