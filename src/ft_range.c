/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:23:21 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/14 19:42:56 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*res;

	if (min >= max)
		return (0);
	size = max - min;
	res = (int *)malloc(size * sizeof(int));
	if (!res)
		return (0);
	i = 0;
	while (i < size)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
