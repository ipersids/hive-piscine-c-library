/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:17:58 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/14 12:45:20 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

int	ft_is_prime(int nb)
{
	int	del;

	if (nb <= 2 || nb % 2 == 0)
	{
		if (nb == 2)
			return (1);
		return (0);
	}
	del = 3;
	while (del < (nb / 2))
	{
		if (nb % del == 0)
			return (0);
		del++;
	}
	return (1);
}
