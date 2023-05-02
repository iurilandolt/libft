/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:43:38 by rlandolt          #+#    #+#             */
/*   Updated: 2023/05/02 13:18:58 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*subs;
	size_t			i;

	if (!str)
		return (NULL);
	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	if (len > ft_strlen(str) - start)
	{
		len = ft_strlen(str) - start;
		subs = (char *)malloc(sizeof(char) * (len + 1));
		if (!subs)
			return (NULL);
	}
	else
		subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	i = -1;
	while (++i < len)
		*(subs + i) = *(str + start + i);
	*(subs + i) = '\0';
	return (subs);
}
