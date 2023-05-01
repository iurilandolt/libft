/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:53:16 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/27 13:38:11 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) + 1;
	if (!c)
		return ((char *)str + (i - 1));
	while (--i >= 0)
	{
		if (*(str + i) == (char)c)
			return ((char *)str + i);
	}
	return (NULL);
}
