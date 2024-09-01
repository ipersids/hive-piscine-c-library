/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:12:11 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 20:46:24 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

int	ft_str_is_uppercase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (!(*tmp >= 'A' && *tmp <= 'Z'))
			return (0);
		tmp++;
	}
	return (1);
}
