/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:50:16 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 17:50:48 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Checks if a string contains only printable characters.
 *
 * This function examines each character in the given string `str` to determine
 * if it is a printable ASCII character. Printable characters are those with
 * ASCII values between 32 (space) and 126 (tilde '~'). If all characters in the
 * string are within this range, the function returns 1. Otherwise, it returns 0.
 *
 * @param str The string to check.
 * @return    1 if all characters in the string are printable, 0 otherwise.
 */
int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (!(str[index] >= 32 && str[index] <= 126))
			return (0);
		index++;
	}
	return (1);
}
