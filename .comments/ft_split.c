/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:02:53 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 18:33:45 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	*substr_cpy(const char *src, size_t len)
{
	char	*dest;

	dest = (char *)malloc(len * sizeof(char));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, len);
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		sub_i;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	split = (char **)malloc((substr_count(str, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	sub_i = 0;
	i = 0;
	while (*(str + i))
	{
		/*if c is found in str i position, increment i */
		if (*(str + i) == c)
			i++;
		/*mark beginning of substr*/
		j = i;
		/*skip text and create a diference beetween j and i*/
		while (*(str + i) && *(str + i) != c)
			i++;
		/*if i > j there is a new string to create, do it*/
		if (j < i)
			*(split + sub_i++) = substr_cpy(&str[j], (i - j) + 1);
	}
	*(split + sub_i) = NULL;
	return (split);
}

/*

tried to make counter using ft_chrchr as an int return
since it returns either NULL or an array position as int
but it work tho ^^ might try again later

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


int count_substrings(const char *str, char delimiter)
{
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
