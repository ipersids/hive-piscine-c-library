/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 15:24:52 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/04 18:44:33 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Calculates the length of a string.
 *
 * This function computes the number of characters in the given string `str` 
 * until it encounters the null terminator (`'\0'`). The length does not include 
 * the null terminator.
 *
 * @param str  The string whose length is to be determined.
 * @return     The length of the string.
 */
int	ft_strlen(char *str)
{
	char	*tmp;
	int		res;

	tmp = str;
	res = 0;
	while (*tmp)
	{
		res++;
		tmp++;
	}
	return (res);
}
