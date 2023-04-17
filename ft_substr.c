/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:43:38 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/17 12:06:16 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*subs;
	size_t			i;

	if (!str)
		return (NULL);
	if (ft_strlen(str) <= start)
		return (ft_strdup(""));
	if (len > (ft_strlen(str) + 1) - start)
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
/*
char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	strsize;
	size_t			i;

	i = 0;
	strsize = ft_strlen(str);
	if (!str)
		return (NULL);
	if (strsize <= start)
		return (ft_strdup(""));
	if (len > (strsize + 1) - start)
	{
		len = strsize - start;
		subs = (char *)malloc(sizeof(char) * (len + 1));
		if (!subs)
			return (NULL);
	}
	else
		subs = (char *)malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (i < len)
	{
		*(subs + i) = *(str + start);
		start++;
		i++;
	}
	*(subs + i) = '\0';
	return (subs);
}
*/
