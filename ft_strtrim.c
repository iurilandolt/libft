/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:05:57 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 13:49:17 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (!str)
		return (NULL);
	start = 0;
	end = ft_strlen(str);
	while (*str && ft_strchr(set, *(str + start)))
		start++;
	while (end > start && ft_strchr(set, *(str + end)))
		end--;
	return (ft_substr(str, start, (end - start) + 1));
}
