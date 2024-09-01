/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:31:41 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/08 18:03:51 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Appends `src` to `dest` with a maximum buffer size.
 *
 * This function appends up to `size - len_dest - 1` characters from `src` to `dest`,
 * ensuring the result is null-terminated. It returns the total length of the string
 * that would have been created if there were enough space, which is the sum of the
 * lengths of `dest` and `src`. If `dest` is already longer than or equal to `size`,
 * it returns `size + len_src`.
 *
 * @param dest  The destination buffer to append to.
 * @param src   The source string to append.
 * @param size  The total size of the destination buffer.
 * @return      The total length of the string that would have been created.
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (len_dest >= size)
		return (size + len_src);
	while (src[i] && i < (size - len_dest - 1))
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
