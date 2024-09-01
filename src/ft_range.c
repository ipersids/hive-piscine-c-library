/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:23:21 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/14 19:42:56 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Creates an array of integers within a specified range.
 *
 * This function allocates memory for an array of integers containing all
 * values from `min` (inclusive) to `max` (exclusive). The array is 
 * dynamically allocated and must be freed by the caller.
 *
 * @param min The starting value (inclusive) of the range.
 * @param max The ending value (exclusive) of the range.
 * @return    A pointer to the first element of the integer array, or NULL 
 *            if `min` is greater than or equal to `max`, or if memory allocation fails.
 */
int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*res;

	if (min >= max)
		return (0);
	size = max - min;
	res = (int *)malloc(size * sizeof(int));
	if (!res)
		return (0);
	i = 0;
	while (i < size)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
