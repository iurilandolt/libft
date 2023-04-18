/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:32:27 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 13:48:29 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	size;

	size = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str, size);
	return (dest);
}
