/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 00:18:45 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/13 00:46:14 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memset(void *s, int c, size_t len)
{
    size_t  i;

    i = 0;
    while (s && len > 0)
        s = c; // *((char *)s) = c;
        s++;
        len--;

    return(s);
}