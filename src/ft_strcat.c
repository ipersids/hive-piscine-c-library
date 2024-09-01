/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 21:54:06 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 21:59:11 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Concatenates two strings.
 *
 * This function appends the content of the string `src` to the end of the string
 * `dest`. The resulting string is null-terminated. The function assumes that 
 * `dest` has enough space to hold the concatenated result. The original `dest` 
 * string is modified in place.
 *
 * @param dest The destination string to which `src` will be appended. 
 * @param src  The source string to be appended to `dest`.
 * @return     A pointer to the resulting concatenated string `dest`.
 */
char	*ft_strcat(char *dest, char *src)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*d)
	{
		d++;
	}
	while (*s)
	{
		*d = *s;
		s++;
		d++;
	}
	*d = '\0';
	return (dest);
}
