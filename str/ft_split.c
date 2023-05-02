/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 03:02:53 by rlandolt          #+#    #+#             */
/*   Updated: 2023/05/02 14:15:45 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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

static char	**ft_clean(char **array, int i)
{
	while (--i >= 0)
		free(*(array + i));
	free (array);
	return (NULL);
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
		if (*(str + i) == c)
			i++;
		j = i;
		while (*(str + i) && *(str + i) != c)
			i++;
		if (j < i)
		{
			*(split + sub_i++) = substr_cpy(&str[j], (i - j) + 1);
			if (!*(split + sub_i - 1))
				return (ft_clean(split, sub_i));
		}
	}
	*(split + sub_i) = NULL;
	return (split);
}
