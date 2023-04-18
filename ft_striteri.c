/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 15:11:27 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/18 13:48:33 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (str)
	{
		while (*(str + i))
		{
			f(i, (str + i));
			i++;
		}
	}
}
