/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 20:05:57 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/15 20:27:04 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *str, char const *set)
{
	size_t start;
	size_t end;

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


int main() {
    char str[] = "   Hello, world!   ";
    char set[] = " ";
    char *trimmed_str = ft_strtrim(str, set);

    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);

    return 0;
}
