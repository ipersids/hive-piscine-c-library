/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:11:48 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/13 17:22:01 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

// Repeated Subtraction Method
// to find the square root of numbers
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
