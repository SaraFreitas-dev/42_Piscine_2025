/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sarfreit <sarfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 21:15:11 by sarfreit          #+#    #+#             */
/*   Updated: 2025/08/03 16:49:18 by bmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "funct.h" 
#include "struct_key.h"

int	total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total += (size - 1) * ft_strlen(sep);
	return (total + 1);
}

void	copy_strs(char *result, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				result[k++] = sep[j++];
		}
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;

	if (size == 0)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(total_len(size, strs, sep));
	if (!result)
		return (NULL);
	copy_strs(result, strs, sep, size);
	return (result);
}
