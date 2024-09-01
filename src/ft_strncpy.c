/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 17:52:04 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 17:58:17 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Copies up to a specified number of characters from one string to another.
 *
 * This function copies the first `n` characters from the source string `src` to the destination string `dest`.
 * If `src` is shorter than `n`, the remaining characters in `dest` are filled with null bytes (`\0`).
 * If `src` is longer than `n`, only the first `n` characters are copied.
 *
 * @param dest The destination string where characters are copied to.
 * @param src  The source string from which characters are copied.
 * @param n    The maximum number of characters to copy.
 * @return     The destination string `dest`.
 */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
