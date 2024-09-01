/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:20:16 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/04 09:37:54 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Swaps the values of two integers.
 *
 * This function exchanges the values of the integers pointed to by `a` and `b`. 
 * After the function call, the value pointed to by `a` will be in `b`, and the value 
 * pointed to by `b` will be in `a`.
 *
 * @param a  Pointer to the first integer to be swapped.
 * @param b  Pointer to the second integer to be swapped.
 */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
