/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:30:08 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/12 18:39:13 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Calculates the power of a number using recursion.
 *
 * This function recursively computes the value of `nb` raised to the power 
 * of `power`. If `power` is less than 0, the function returns 0. If `power` 
 * is 0, the function returns 1, since any number raised to the power of 0 
 * is 1.
 *
 * @param nb     The base number.
 * @param power  The exponent (power) to which the base number is raised.
 * @return       The result of `nb` raised to the power of `power`. Returns 
 *               0 if `power` is negative.
 */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
