/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:39:46 by rlandolt          #+#    #+#             */
/*   Updated: 2023/05/01 11:12:05 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_printnbr(int n)
{
	int	size;

	size = 0;
	if (n == INT_MIN)
		return (ft_printstr("-2147483648"));
	else if (n < 0)
	{
		size += ft_printchar('-');
		size += ft_printnbr(-n);
	}
	else if (n >= 10)
	{
		size += ft_printnbr(n / 10);
		size += ft_printnbr(n % 10);
	}
	else
		size += ft_printchar(n + '0');
	return (size);
}
