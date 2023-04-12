/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:20:03 by rlandolt          #+#    #+#             */
/*   Updated: 2023/03/15 10:29:45 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dcount;
	unsigned int	scount;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dcount = i;
	while (src[j] != '\0')
		j++;
	scount = j;
	if (size <= dcount)
		return (size + scount);
	j = 0;
	while (src[j] != '\0' && size > i + 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dcount + scount);
}
/*
int main(void)
{
        char str_1[] = "123";
        char str_2[] = "456789";
        unsigned int n = 10;

	printf("%s\n", str_2);
        ft_strlcat(str_2, str_1, n);
        printf("%s\n", str_2);
	printf("\nResult: %i \n", ft_strlcat(str_2, str_1, n));
}*/
