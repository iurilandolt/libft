/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:43:38 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/16 02:45:29 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*subs;
	unsigned int	strsize;
	size_t	i;

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
//tested
