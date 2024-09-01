/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:54:09 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/12 11:39:16 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

/**
 * Converts a string to an integer.
 *
 * This function takes a string as input and converts it to an integer,
 * mimicking the behavior of the standard C library function `atoi`.
 * It handles leading whitespace characters (like spaces and tabs),
 * optional signs ('-' or '+'), and numeric characters ('0'-'9').
 * 
 * The function skips any leading whitespace characters. If it encounters
 * a '-' sign, it sets a flag to indicate that the number is negative.
 * It then processes the numeric characters, converting them into an integer
 * value. If the number is negative (as indicated by the sign), the function
 * returns the negative of the computed integer.
 * 
 * @param str The string to be converted.
 * 
 * @return	The integer value represented by the string, or 0 if the string
 * 			does not contain a valid number.
 */
int	ft_atoi(char *str)
{
	int		is_negative;
	int		res;

	is_negative = 0;
	res = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_negative++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (*str - '0');
		str++;
	}
	if (is_negative % 2)
		return (-res);
	return (res);
}
