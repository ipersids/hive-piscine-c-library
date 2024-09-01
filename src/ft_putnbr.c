/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:32:37 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/13 10:55:30 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Outputs an integer to the standard output.
 *
 * This function prints the given integer `nb` to the standard output. It 
 * handles negative numbers by printing a '-' sign and correctly manages 
 * the edge case of the smallest 32-bit signed integer (-2147483648). 
 * The function uses recursion to print each digit of the number.
 *
 * @param nb The integer to print.
 */
void	ft_putnbr(int nb)
{
	char	ch;

	ch = '0';
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
		{
			write(1, "2", 1);
			nb = 147483648;
		}
		else
			nb = nb * (-1);
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ch = ch + (nb % 10);
	write(1, &ch, 1);
}
