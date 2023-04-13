/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 11:27:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/13 12:24:29 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    if (!dest && !src)
        return(NULL);
    if (dest == src)
        return(dest);
    i = 0;
    if ((char *)dest > (char *)src)
    {
        while(n > 0)
        {
            *((char *)dest + n) = *(char *)(src + n);
            n--;
        }
    }
    else
        while (i < n)
        {
            *((char *)dest + i) = *((char *)src + i);
            i++;
        }
    return(dest);
}