/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:54:25 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 21:09:34 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Compares two strings lexicographically.
 *
 * This function compares `s1` and `s2` character by character. It returns 0 if 
 * the strings are equal, a negative value if `s1` is less than `s2`, or 
 * a positive value if `s1` is greater than `s2`.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return   An integer indicating the result of the comparison.
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
