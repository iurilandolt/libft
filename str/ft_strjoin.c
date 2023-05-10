/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:12:00 by rlandolt          #+#    #+#             */
/*   Updated: 2023/05/10 15:43:20 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*dest;
	size_t	len;
	int		i;
	int		j;

	if (!str1 || !str2)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = -1;
	j = 0;
	while (*(str1 + ++i))
		*(dest + i) = *(str1 + i);
	while (str2[j])
		*(dest + i++) = *(str2 + j++);
	*(dest + i) = '\0';
	return (dest);
}
