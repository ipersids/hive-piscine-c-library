/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:16:23 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/09 19:57:55 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Locates the first occurrence of a substring within a string.
 *
 * This function searches for the substring `to_find` within the string `str`.
 * It returns a pointer to the beginning of the first occurrence of `to_find` in `str`.
 * If `to_find` is an empty string, the function returns `str` itself.
 * If `to_find` is not found in `str`, the function returns `NULL`.
 *
 * @param str      The string in which to search for the substring.
 * @param to_find  The substring to locate within `str`.
 * @return         A pointer to the beginning of the first occurrence of `to_find` in `str`, 
 *                 or `NULL` if `to_find` is not found.
 */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
