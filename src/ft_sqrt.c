/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:11:48 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/13 17:22:01 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Computes the integer square root of a non-negative number using the 
 * repeated subtraction method.
 *
 * This function calculates the integer square root of the given number `nb`
 * by repeatedly subtracting odd numbers starting from 1. The number of 
 * subtractions performed gives the square root if it is a perfect square.
 * If the number is not a perfect square or if `nb` is negative, the function 
 * returns 0.
 *
 * @param nb The non-negative integer whose square root is to be computed.
 * @return   The integer square root of `nb` if `nb` is a perfect square, 
 *           or 0 otherwise.
 */
int	ft_sqrt(int nb)
{
	int	odd_nb;
	int	res;

	if (nb <= 0)
		return (0);
	odd_nb = 1;
	res = 0;
	while (nb > 0)
	{
		nb -= odd_nb;
		odd_nb += 2;
		res++;
	}
	if (nb == 0)
		return (res);
	return (0);
}
