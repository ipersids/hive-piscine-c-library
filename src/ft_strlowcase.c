/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:35:27 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/06 15:03:50 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Converts all uppercase characters in a string to lowercase.
 *
 * @param str  The string to be converted to lowercase.
 * @return     The modified string with all uppercase letters converted to lowercase.
 */
char	*ft_strlowcase(char *str)
{
	int	diff;
	int	index;

	diff = 'a' - 'A';
	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] += diff;
		index++;
	}
	return (str);
}
