/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 19:43:48 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 19:58:54 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

int	ft_str_is_lowercase(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (!(*tmp >= 'a' && *tmp <= 'z'))
			return (0);
		tmp++;
	}
	return (1);
}
