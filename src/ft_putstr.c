/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 14:50:46 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/04 15:11:26 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Outputs a string to the standard output.
 *
 * This function prints the given null-terminated string `str` to the standard
 * output. It iterates through each character of the string and writes it to 
 * the output one character at a time.
 *
 * @param str The string to print.
 */
void	ft_putstr(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		write(1, tmp, 1);
		tmp++;
	}
}
