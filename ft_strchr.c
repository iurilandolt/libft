/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:46:48 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/14 12:50:49 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	while(*str)
	{
		if (*str == (char)c)
			return ((char)c);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return(NULL);
}
