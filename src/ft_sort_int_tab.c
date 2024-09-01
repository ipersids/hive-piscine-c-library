/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 17:25:49 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 12:01:24 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Sorts an array of integers in ascending order.
 *
 * This function sorts the elements of an integer array `tab` in ascending 
 * order using a simple sorting algorithm (selection sort). It iterates over 
 * each element, comparing it with subsequent elements and swapping them if 
 * they are out of order.
 *
 * @param tab   A pointer to the array of integers to be sorted.
 * @param size  The number of elements in the array.
 */
void	ft_sort_int_tab(int *tab, int size)
{
	int	cnt;
	int	i;

	i = 0;
	while (i < (size - 1))
	{
		cnt = i + 1;
		while (cnt < size)
		{
			if (tab[i] > tab[cnt])
			{
				ft_swap(&tab[i], &tab[cnt]);
			}
			cnt++;
		}
		i++;
	}
}
