/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:59:45 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/14 18:21:33 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

char	*ft_strdup(char *src)
{
	char	*res;
	int		len_src;
	int		i;

	len_src = 0;
	while (src[len_src])
	{
		len_src++;
	}
	res = (char *)malloc((len_src + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[len_src] = '\0';
	return (res);
}
