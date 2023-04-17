/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:02:53 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/17 01:58:07 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



static int	substr_count(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_strchr(str, c) != NULL)
			str++;
		if (*str && ft_strchr(str, c) == NULL)
			count++;
		while (*str && ft_strchr(str, c) == NULL)
			str++;
	}
	return (count);
}

static char	substr_cpy(const char *src, size_t len)
{
	char	*dest;
	dest = (char *)malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, len);
	return (dest);
}

char **ft_split(char const *str, char c)
{
	char	**split;

	if (!str)
		return (NULL);
	split = (char **)malloc((substr_count(str, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
}

/*
static int	is_delimeter(char str, char c)
{
	if (str == c)
		return (1);
	else
		return (0);
}

static int	substr_count(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_delimeter(*str, c))
			str++;
		if (*str && !is_delimeter(*str, c))
			count++;
		while (*str && !is_delimeter(*str, c))
			str++;
	}
	return (count);
}

int count_substrings(const char *str, char delimiter)
{
    int count = 1; // Initialize count to 1 to handle empty strings correctly
    while (*str) {
        if (*str == delimiter) {
            count++;
        }
        str++;
    }
    if (*(str - 1) == delimiter) {
        count--;
    }
    return count;
}
*/
