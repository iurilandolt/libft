/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:11:22 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 17:32:26 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
		/*special case. 0 has only one digit.*/
	if (n < 0)
		count++;
		/*if n is negative increment count to include the '-'*/
	while (n != 0)
	{
		n /= 10;
		count++;
		/*Divide n by 10 repeatedly until n becomes 0,
		counting each division operation to get the number of digits in n.*/
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		sign;

	size = digit_count(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	*(str + size) = '\0';
	while (size > 0)
	{
		*(str + size - 1) = (n % 10) * sign + '0';
		n /= 10;
		size--;
		/*iterate from the end of the string,
		convert to ascii,
		assign the value of the modulos operation to decrementing positions of the string */
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
