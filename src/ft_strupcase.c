/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:35:27 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/06 15:00:52 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Converts all lowercase letters in a string to uppercase.
 *
 * @param str  The string to be converted to uppercase.
 * @return     The modified string with all lowercase letters converted to uppercase.
 */
char	*ft_strupcase(char *str)
{
	int	diff;
	int	index;

	diff = 'a' - 'A';
	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= diff;
		index++;
	}
	return (str);
}
