/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:48:34 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 12:51:43 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Copies `src` to `dest` with a maximum buffer size.
 *
 * This function copies up to `size - 1` characters from `src` to `dest`, ensuring that
 * `dest` is null-terminated if `size` is greater than 0. It always null-terminates
 * the destination string if there is space. The function returns the total length of `src`.
 *
 * @param dest  The destination buffer to copy to.
 * @param src   The source string to copy.
 * @param size  The total size of the destination buffer.
 * @return      The total length of the source string.
 */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int src_len;
    unsigned int i;

	src_len = 0;
	i = 0;
    while (src[src_len] != '\0')
        src_len++;
    if (size == 0)
        return src_len;
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return src_len;
}
