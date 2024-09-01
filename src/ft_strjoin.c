/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:44:34 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/17 11:45:46 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Support function: Allocates and returns an empty string.
 *
 * This function allocates a single byte of memory and initializes it to 
 * the null terminator, effectively creating an empty string. If memory 
 * allocation fails, it returns `NULL`.
 *
 * @return    A pointer to the newly allocated empty string, or `NULL` if 
 *            memory allocation fails.
 */
char	*empty_str(void)
{
	char	*res;

	res = (char *)malloc(sizeof(char));
	if (!res)
		return (0);
	*res = '\0';
	return (res);
}

/**
 * Support function: Calculates the length of the final string when joining an array of strings
 * with a separator.
 *
 * This function computes the total length of the string that would result 
 * from concatenating all strings in `strs`, separated by `sep`, plus an 
 * additional null terminator.
 * 
 * This function uses `ft_strlen` to calculate the lengths of the strings and 
 * separators.
 *
 * @param size The number of strings in the `strs` array.
 * @param strs Array of strings to concatenate.
 * @param sep  Separator string to insert between each string in `strs`.
 * @return     The length of the resulting concatenated string.
 */
int	get_ultumate_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * (size - 1));
	len += 1;
	return (len);
}

/**
 * Support function: Copies the strings from `strs` into `dest`, 
 * with `sep` inserted between each string.
 *
 * This function populates `dest` with the concatenated result of all strings 
 * in `strs`, separated by `sep`. It assumes that `dest` has enough space 
 * to hold the result.
 *
 * @param size The number of strings in the `strs` array.
 * @param dest Pointer to the destination buffer where the result will be copied.
 * @param strs Array of strings to concatenate.
 * @param sep  Separator string to insert between each string in `strs`.
 */
void	get_ultumate_cpy(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*dest = strs[i][j++];
			dest++;
		}
		i++;
		if (i < size)
		{
			j = 0;
			while (sep[j])
			{
				*dest = sep[j++];
				dest++;
			}
		}
	}
	*dest = '\0';
}

/**
 * Joins an array of strings into a single string with a specified separator.
 *
 * This function concatenates all strings in the `strs` array, placing `sep` 
 * between each string. It allocates enough memory to hold the entire result 
 * including the separators and null terminator. If `size` is zero, it returns 
 * an empty string.
 *
 * @param size The number of strings in the `strs` array.
 * @param strs Array of strings to concatenate.
 * @param sep  Separator string to insert between each string in `strs`.
 * @return     A pointer to the newly allocated concatenated string, or `NULL` 
 *             if memory allocation fails.
 */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	if (size == 0)
	{
		res = empty_str();
		return (res);
	}
	len = get_ultumate_len(size, strs, sep);
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (0);
	get_ultumate_cpy(size, res, strs, sep);
	return (res);
}
