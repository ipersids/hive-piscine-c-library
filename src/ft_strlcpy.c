/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 11:48:34 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 12:51:43 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char	*d;
	char	*s;

	d = dest;
	s = src;
	while (*s && *d)
	{
		*d = *s;
		d++;
		s++;
	}
	if (d < (dest + size))
		*d = '\0';
	else
		dest[size] = '\0';
	while (*s)
	{
		s++;
	}
	return ((unsigned int)(s - src));
}
