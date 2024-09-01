/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Julia Persidskaia					        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:44:34 by ipersids          #+#    #+#             */
/*   Updated: 2024/08/17 11:45:46 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libpiscine.h"

char	*empty_str(void)
{
	char	*res;

	res = (char *)malloc(sizeof(char));
	if (!res)
		return (0);
	*res = '\0';
	return (res);
}

int	get_ultumate_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + (ft_strlen(sep) * (size - 1));
	len += 1;
	return (len);
}

void	get_ultumate_cpy(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*dest = strs[i][j++];
			dest++;
		}
		i++;
		if (i < size)
		{
			j = 0;
			while (sep[j])
			{
				*dest = sep[j++];
				dest++;
			}
		}
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	if (size == 0)
	{
		res = empty_str();
		return (res);
	}
	len = get_ultumate_len(size, strs, sep);
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (0);
	get_ultumate_cpy(size, res, strs, sep);
	return (res);
}
