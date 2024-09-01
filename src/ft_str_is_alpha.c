/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:03:56 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 18:27:39 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Checks if a string contains only alphabetic characters.
 *
 * @param str The string to check.
 * @return    1 if the string contains only alphabetic characters, 0 otherwise.
 */
int	ft_str_is_alpha(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (!((*tmp >= 'A' && *tmp <= 'Z') || (*tmp >= 'a' && *tmp <= 'z')))
			return (0);
		tmp++;
	}
	return (1);
}
