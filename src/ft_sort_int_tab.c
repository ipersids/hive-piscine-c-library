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
