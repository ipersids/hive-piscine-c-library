/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:08:47 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 22:48:27 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Concatenates a specified number of characters from one string to another.
 *
 * This function appends up to `nb` characters from the source string `src`
 * to the end of the destination string `dest`. If `nb` is greater than
 * the length of `src`, the entire `src` string is appended. The function
 * ensures that the result is null-terminated.
 *
 * @param dest  The destination string to which characters will be appended.
 * @param src   The source string from which characters will be taken.
 * @param nb    The maximum number of characters to append from `src`.
 * @return      The destination string with the appended characters.
 */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*d;
	unsigned int	i;

	d = dest;
	i = 0;
	while (*d)
	{
		d++;
	}
	while (src[i] && i < nb)
	{
		*d = src[i];
		d++;
		i++;
	}
	*d = '\0';
	return (dest);
}
