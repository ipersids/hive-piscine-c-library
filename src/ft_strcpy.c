/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:10:57 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 15:45:15 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Copies a string to a destination buffer.
 *
 * This function copies the contents of `src` to `dest`, including the null 
 * terminator. The destination buffer must be large enough to hold the 
 * source string.
 *
 * @param dest The destination buffer.
 * @param src  The source string to copy from.
 * @return     A pointer to the destination buffer.
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
