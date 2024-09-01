/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 18:03:56 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/05 18:27:39 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

int	ft_str_is_alpha(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
	{
		if (!((*tmp >= 'A' && *tmp <= 'Z') || (*tmp >= 'a' && *tmp <= 'z')))
			return (0);
		tmp++;
	}
	return (1);
}
