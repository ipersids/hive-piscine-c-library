/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 22:08:47 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 22:48:27 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

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
