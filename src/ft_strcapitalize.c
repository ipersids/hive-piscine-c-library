/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:17:17 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 10:54:43 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Capitalizes the first letter of each word in a string.
 *
 * This function modifies the given string `str` such that the first letter of 
 * each word is capitalized and all subsequent letters in the word are made 
 * lowercase. Words are defined as sequences of alphabetic characters that are
 * separated by non-alphabetic characters. The function iterates through the 
 * string and adjusts character cases based on whether the current character 
 * starts a new word or continues an existing one.
 *
 * @param str The string to be modified.
 * @return    The modified string with each word capitalized.
 */
char	*ft_strcapitalize(char *str)
{
	int		is_case;
	char	*s;

	is_case = 1;
	s = str;
	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= '0' && *s <= '9')
			|| (*s >= 'A' && *s <= 'Z'))
		{
			if (is_case && *s >= 'a' && *s <= 'z')
				*s = *s - 32;
			else if (*s >= 'A' && *s <= 'Z' && is_case == 0)
				*s = *s + 32;
			is_case = 0;
		}
		else
		{
			is_case = 1;
		}
		s++;
	}
	return (str);
}
