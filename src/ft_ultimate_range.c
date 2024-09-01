/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:36:30 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/16 12:33:57 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Creates an array of integers within a specified range.
 *
 * This function allocates an array of integers that spans from `min` to `max - 1`.
 * It sets `*range` to point to this array and returns the number of elements in the array.
 * If `min` is greater than or equal to `max`, it sets `*range` to `0` and returns `0`.
 * If memory allocation fails, it returns `-1`.
 *
 * Note: This function utilizes `ft_range()` to create the array.
 *
 * @param range  Pointer to an integer pointer where the array will be allocated.
 * @param min    The starting value of the range (inclusive).
 * @param max    The ending value of the range (exclusive).
 * @return       The number of elements in the array, or `-1` if memory allocation fails.
 */
int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = ft_range(min, max);
	if (!*range)
		return (-1);
	return (max - min);
}
