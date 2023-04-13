/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlandolt <rlandolt@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:49:27 by rlandolt          #+#    #+#             */
/*   Updated: 2023/04/13 11:24:45 by rlandolt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

    #define   LIBFT_H

    #include <unistd.h>
    #include <stdlib.h>
    #include <limits.h>
    #include <stddef.h>

    int	ft_atoi(const char *nptr);
    int ft_isalnum(int c);
    int	ft_isalpha(int c);
    int ft_isascii(int c);
    int	ft_isdigit(int c);
    int ft_isprint(int c);
    size_t	ft_strlen(const char *s);
    void *ft_memset(void *s, int c, size_t len);
    void bzero(void *s, size_t n);
    void *memcpy(void *dest, const void *src, size_t n);




#endif