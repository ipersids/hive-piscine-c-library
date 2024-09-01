/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:12:11 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 20:46:24 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Checks if a string contains only uppercase alphabetic characters.
 *
 * @param str The string to check.
 * @return    1 if all characters in the string are uppercase, 0 otherwise.
 */
int	ft_str_is_uppercase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (!(*tmp >= 'A' && *tmp <= 'Z'))
			return (0);
		tmp++;
	}
	return (1);
}
