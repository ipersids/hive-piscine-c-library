/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 15:17:17 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/07 10:54:43 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

char	*ft_strcapitalize(char *str)
{
	int		is_case;
	char	*s;

	is_case = 1;
	s = str;
	while (*s)
	{
		if ((*s >= 'a' && *s <= 'z') || (*s >= '0' && *s <= '9')
			|| (*s >= 'A' && *s <= 'Z'))
		{
			if (is_case && *s >= 'a' && *s <= 'z')
				*s = *s - 32;
			else if (*s >= 'A' && *s <= 'Z' && is_case == 0)
				*s = *s + 32;
			is_case = 0;
		}
		else
		{
			is_case = 1;
		}
		s++;
	}
	return (str);
}
