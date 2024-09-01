/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:03:56 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 18:38:04 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Checks if a string contains only numeric characters.
 *
 * @param str The string to check.
 * @return    1 if the string contains only numeric characters, 0 otherwise.
 */
int	ft_str_is_numeric(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (!(*tmp >= '0' && *tmp <= '9'))
			return (0);
		tmp++;
	}
	return (1);
}
